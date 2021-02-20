const fs = require('fs')

for (let k = 1; k < 20; k++) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let pattern = ''
    let i = 1
    for (m = 1; m <= k; m++) {
        for (n = k; n >= m; n--) {
            pattern += i.toString();
            i = i + 1
        }
        pattern += "\n"
    }
    fs.writeFileSync(`out${k}.txt`, pattern)
}
