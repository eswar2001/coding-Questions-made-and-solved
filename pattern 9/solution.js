const fs = require('fs')

for (let k = 1; k < 20; k += 1) {
    fs.writeFileSync(`in${k}.txt`, k.toString())
    let pattern = ''
    let alphabet = 65;
    for (let i = 0; i <= k; i++) {
        for (let j = 0; j <= k - i; j++) {
            pattern += String.fromCharCode((alphabet + j));
        }
        for (let k = 1; k <= i * 2 - 1; k++) {
            pattern += (" ");
        }
        for (let l = k - i; l >= 0; l--) {
            if (l != k)
                pattern += String.fromCharCode((alphabet + l));
        }
        pattern += '\n';
    }

    for (let i = k - 1; i >= 0; i--) {
        for (let j = 0; j <= k - i; j++) {
            pattern += String.fromCharCode((alphabet + j));
        }
        for (let k = 1; k <= i * 2 - 1; k++) {
            pattern += (" ");
        }
        for (let l = k - i; l >= 0; l--) {
            if (l != k)
                pattern += String.fromCharCode((alphabet + l));
        }
        pattern += '\n';
    }

    fs.writeFileSync(`out${k}.txt`, pattern)
}
