
function rvereseArray(arr, start, end) {
    while (start < end) {
        var temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

function printArray(arr, size) {
    for (var i = 0; i < size; i++) {
        console.log(arr[i]);
    }
}

/* Driver function to test above functions */
var arr = [1, 2, 3, 4, 5, 6];
var n = 6;
// To print original array
printArray(arr, n);

// Function calling
rvereseArray(arr, 0, n - 1);

console.log("Reversed array is");

// To print the Reversed array
printArray(arr, n);
