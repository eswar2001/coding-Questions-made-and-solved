const fs = require('fs')

for (let k = 1; k < 20; k++) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let pattern = ''
    for (var i = 1; i <= k; i++) {
        for (var s = k - 1; s >= i; s--) {
            pattern += " "
        }
        for (var j = 1; j <= i; j++) {
            pattern += "* "
        }
        pattern += '\n'
    }
    if (i == k + 1) {
        for (var i = 1; i <= k - 1; i++) {
            for (var s = 1; s <= i; s++) {
                pattern += " "
            }
            for (j = i; j <= k - 1; j++) {
                pattern += "* "
            }
            pattern += '\n'
        }
    }
    fs.writeFileSync(`out${k}.txt`, pattern)
}
