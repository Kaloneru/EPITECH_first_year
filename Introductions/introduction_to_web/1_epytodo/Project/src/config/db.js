const mariadb = require('mariadb');
const sql_env_info = {
    database: process.env.MYSQL_DATABASE,
    host: process.env.MYSQL_HOST,
    user: process.env.MYSQL_USER,
    password: process.env.MYSQL_ROOT_PASSWORD,
}

var pool = mariadb.createPool(sql_env_info);
module.exports = Object.freeze({
    pool: pool
});

module.exports = Object.freeze({
    pool: pool
});
