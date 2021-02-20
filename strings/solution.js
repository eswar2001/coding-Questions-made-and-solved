const fs = require('fs');

var data = fs.readFileSync('./in00.txt',
    { encoding: 'utf8', flag: 'r' });
const input = data.split("\n");

data = fs.readFileSync('./out00.txt',
    { encoding: 'utf8', flag: 'r' });
const output = data.split("\n");

for( var i=1;i<=20;i++){
    fs.writeFileSync(`in${i}`.toString(),input[i-1]);
    fs.writeFileSync(`out${i}`.toString(),output[i-1]);
}
