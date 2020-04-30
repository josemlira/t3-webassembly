
function solver(n, setX, setY, setZ) {
    setX = setX.map(x => [x, 0])
    setY = setY.map(x => [x, 0])
    setZ = setZ.map(x => [x, 0])
    var solution = []
    for (let x = 0; x < setX.length; x++) { 
        for (let y = 0; y < setY.length; y++) { 
            for (let z = 0; z < setZ.length; z++) { 
                valueX = setX[x], valueY = setY[y], valueZ = setZ[z]
                if(valueX[0] + valueY[0] + valueZ[0] === n && valueX[1] + valueY[1] + valueZ[1] === 0){
                    solution.push([valueX[0], valueY[0], valueZ[0]])
                    setX[x][1] += 1
                    setY[y][1] += 1
                    setZ[z][1] += 1
                }
            }
        }
    }
    return solution
}

console.log(solver(10, [3,4,4], [1,4,6], [1,2,5]))

