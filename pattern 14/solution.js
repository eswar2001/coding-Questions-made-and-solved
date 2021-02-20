const fs = require('fs')

for (let n = 10; n < 100; n += 10) {
    fs.writeFileSync(`in${n}.txt`, n.toString())
    let m = 1;
    let pattern = ''
    for (let i = 1; i <= n; i++) {
        for (let j = 1; j < i; j++) {
            pattern+=(" ");
        }
        for (let k = i; k <= n; k++) {
            pattern+=(k.toString() + " ");
        }
        pattern += '\n';
    }
    for (let i = n - 1; i >= 1; i--) {
        for (let j = 1; j < i; j++) {
            pattern+=(" ");
        }
        for (let k = i; k <= n; k++) {
            pattern+=(k.toString() + " ");
        }
        pattern += '\n';
    }
    fs.writeFileSync(`out${n}.txt`, pattern)
}

