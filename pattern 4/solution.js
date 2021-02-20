

const fs = require('fs')

for (let k = 1; k < 20; k++) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let i, j;
    let pattern = ''
    for (i = 1; i <= k; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                pattern += 0;
            }
            else {
                pattern += 1;
            }
        }
        pattern += '\n'
    }
    fs.writeFileSync(`out${k}.txt`, pattern)
}