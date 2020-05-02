
function maketest(size){
    let x = Array.from(new Array(size), (x,i) => i + 1)
    let y = Array.from(new Array(size), (x,i) => i + 1)
    let z = new Array(size).fill(1)
    let b = size + 2;
    return {x:x, y:y, z:z ,b:b};
}