function mergeHalves(la,ra) {
  let mergedArray = []
  let [ laI, raI, maI ] = [0,0,0]

  while (laI < la.length && raI < ra.length) {
    if (la[laI] < ra[raI]) {
      mergedArray[maI] = la[laI]
      laI++
    } else {
      mergedArray[maI] = ra[raI]
      raI++
    }
    maI++
  }

  while (laI < la.length) {
    mergedArray[maI] = la[laI]
    laI++
    maI++
  }
  while (raI < ra.length) {
    mergedArray[maI] = ra[raI]
    raI++
    maI++
  }
  return mergedArray
}

function mergeSort(array) {
  const len = array.length
  if (len <= 1) return
  const mid = Math.floor(len/2)
  const la = []
  const ra = []

  for (let i = 0; i < mid; i++) {
    la[i] = array[i]
  }
  for (let i = 0; i < len - mid; i++) {
    ra[i] = array[i+mid]
  }

  mergeSort(la)
  mergeSort(ra)
  const mergedArray = mergeHalves(la,ra)

  for (let i = 0; i < len; i++) {
    array[i] = mergedArray[i]
  }
}

let array = [-3,-22,5,1,0,9,17,4]

mergeSort(array)

console.log(array)
