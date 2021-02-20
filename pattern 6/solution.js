const fs = require('fs')

for (let k = 1; k < 20; k++) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let pattern = ''
    for (m = 1; m <= k; m++) {
        for (n = k; n >= m; n--) {
            pattern += k.toString();
        }
        pattern += "\n"
    }
    fs.writeFileSync(`out${k}.txt`, pattern)
}
