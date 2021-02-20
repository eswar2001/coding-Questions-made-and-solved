const fs = require('fs')

for (let K = 0; K < 20; K++) {
    fs.writeFileSync(`in${K}.txt`, K.toString())
    let i, j, k;
    let pattern = ''
    for (i = 1; i <= K; i++) {
        for (j = i; j < K; j++) {
            pattern += " ";
        }
        for (k = 1; k <= i; k++) { pattern += ("*"); } pattern += "\n";
    } for (i = K; i >= 1; i--) {
        for (j = i; j <= K; j++) {
            pattern += " ";
        }
        for (k = 1; k < i; k++) {
            pattern += "*";
        }
        pattern += "\n";
    }
    fs.writeFileSync(`out${K}.txt`, pattern)
}