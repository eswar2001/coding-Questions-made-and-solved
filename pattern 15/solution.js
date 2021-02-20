const fs = require('fs')

for (let n = 10; n < 100; n += 10) {
    fs.writeFileSync(`in${n}.txt`, n.toString())
    let m = 1;
    let pattern = ''
    for (let i = 1; i < n + 1; i++) {
        for (let j = i; j < n + 1; j++) {
            pattern += (j + " ");
        }
        for (let k = 1; k < i; k++) {
            pattern += (k + " ");
        }
        pattern += '\n';
    }

    fs.writeFileSync(`out${n}.txt`, pattern)
}

