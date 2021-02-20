const fs = require('fs')

for (let n = 8; n < 50; n+=8) {
    fs.writeFileSync(`in${n}.txt`, n.toString())
    let m = 1;
    let pattern = ''
    for (let i = 1; i <= n; i++)
    {
        for (let j = 1; j <= i; j++)
        {
            pattern+=j.toString() + " ";
        }
        pattern+="\n";
    }
    for (let i = n - 1; i >= 1; i--)
    {
        for (let j = 1; j <= i; j++)
        {
            pattern+=j.toString() + " ";
        }
        pattern+="\n";
    }
    fs.writeFileSync(`out${n}.txt`, pattern)
}