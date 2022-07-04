const express = require('express');
const { all } = require('express/lib/application');
const { json } = require('express/lib/response');
const db = require('./config/db.js');
const app = express();
const port = 3000;
require('dotenv').config({ encoding: 'utf-8' });


app.get("/", (req, res) => {
    res.send(" Welcome to Epytodo !") ;
});

app.post('/register', async (req, res) => {
    let data = req.body;
    if (data.email && data.name && data.firstname && data.password)
        try {
            const result = await db.pool.query("select * from user where email = ?", [data.email]);
            if (!result.rows[0][data]) {
                const result = await db.pool.query("insert into user (email, password, name, firstname) values (?, ?, ?, ?)", [data.email, data.password, data.firstname, data.password]);
                res.json({ token: "Token of the newly logged in user" });
            } else
                res.json({ msg: "Account already exists" });
        } catch (err) {
            throw err;
        }
})
app.post('/login', async (req, res) => {
    let data = req.body;
    if (data.email && data.password)
        try {
            const result = await db.pool.query("select * from user where email = ? && password = ?", [data.email, data.password]);
            if (result.rows[0][data])
                res.json({ token: "Token of the newly logged in user" });
            else
                res.json({ msg: "invalid Credentials" });
        } catch (err) {
            throw err;
        }
})

app.get('/user', async (req, res) => {
    try {
        const result = await db.pool.query("select * from user");
        res.json(result);
    } catch (err) {
        throw err;
    }
})

app.get('/user/todos', async (req, res) => {
    try {
        const result = await db.pool.query("select * from todo");
        res.json(result);
    } catch (err) {
        throw err;
    }
})

app.get('todos', async (req, res) => {
    try {
        const result = await db.pool.query("select * from todo");
        res.json(result);
    } catch (err) {
        throw err;
    }
})

app.delete('/user/:id', async (req, res) => {
    var id = req.params.id;
    try {
        const result = await db.pool.query("delete from user where id = ?", [id]);
        res.json({ msg: "Successfully deleted record number: ${id}" });
    } catch (err) {
        throw err;
    }
})

app.get('/users/:id', async (req, res) => {
    var id = req.params.id;
    try {
        const result = await db.pool.query("select * from user where id = ?", [id]);
        res.json(result);
    } catch (err) {
        throw err;
    }
})

app.get('/users/:email', async (req, res) => {
    var email = req.params.email;
    try {
        const result = await db.pool.query("select * from user where email = ?", [email]);
        res.json(result);
    } catch (err) {
        throw err;
    }
})

app.delete('/todos/:id', async (req, res) => {
    var id = req.params.id;
    try {
        const result = await db.pool.query("delete from todo where id = ?", [id]);
        res.json({ msg: "Successfully deleted record number: ${id}" });
    } catch (err) {
        throw err;
    }
})


app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})
