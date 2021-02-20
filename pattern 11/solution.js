const fs = require('fs')

for (let n = 1; n < 20; n++) {
    fs.writeFileSync(`in${n}.txt`, n.toString())
    let m=1;
    let pattern = ''
    for (let i = n; i >= 1; i--) {
        for (let j = 1; j < m; j++) {
            pattern += " ";
        }
        for (let k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n)
                pattern += "*";
            else
                pattern += " ";
        }
        m++;

        pattern += "\n";
    }
    fs.writeFileSync(`out${n}.txt`, pattern)
}