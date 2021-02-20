const fs = require('fs')

for (let k = 1; k < 20; k++) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let i, j;
    let pattern = ''
    for (i = 0; i <= k - 1; i++) {
        for (j = 0; j <= i; j++) { pattern += "*" + " "; } pattern += '\n';
    }
    for (i = k - 1; i >= 0; i--) {
        for (j = 0; j <= i - 1; j++) {
            pattern += "*" + " ";
        }
        pattern += '\n';
    }
    fs.writeFileSync(`out${k}.txt`, pattern)
}