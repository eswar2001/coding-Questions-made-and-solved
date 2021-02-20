const fs = require('fs')

for (let k = 1; k < 20; k++) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let pattern = ''
    let i = 1
    var m, n, num = k;
    for (m = num; m > 1; m--) {
        for (n = num; n >= 1; n--) {
            if (n > m) pattern += n.toString();
            else pattern += m.toString();
        }
        for (n = 2; n <= num; n++) {
            if (n > m) pattern += n.toString();
            else pattern += m.toString();
        }
        pattern += "\n";
    }
    for (m = 1; m <= num; m++) {
        for (n = num; n >= 1; n--) {
            if (n > m) pattern += n.toString();
            else pattern += m.toString();
        }
        for (n = 2; n <= num; n++) {
            if (n > m) pattern += n.toString();
            else pattern += m.toString();
        }
        pattern += "\n";
    }
    fs.writeFileSync(`out${k}.txt`, pattern)
}
