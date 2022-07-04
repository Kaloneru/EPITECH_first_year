FROM node:12-alpine3.15
EXPOSE 80
WORKDIR /result

COPY package.json .
RUN npm install

COPY . .
CMD ["npm", "start"]