const fs = require('fs')

for (let n = 2; n < 50; n += 2) {
    fs.writeFileSync(`in${n}.txt`, n.toString())
    let pattern = ''

    for (let i = 1; i <= n; i++) {
        if (i == ((n / 2) + 1)) {
            for (let j = 1; j <= n; j++) {
                pattern += "+";
            }
        }
        else {
            for (let j = 1; j <= n / 2; j++) {
                pattern += " ";
            }
            pattern += "+";
        }
        pattern += "\n";
    }
    fs.writeFileSync(`out${n}.txt`, pattern)
}
