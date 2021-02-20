const fs = require('fs')

for (let n = 1; n < 20; n++) {
    fs.writeFileSync(`in${n}.txt`, n.toString())
    let pattern = ''
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 ||
                j == n || i == j || j == (n - i + 1))
                pattern += "*";
            else
                pattern += " ";
        }
        pattern += "\n";
    }
    fs.writeFileSync(`out${n}.txt`, pattern)
}