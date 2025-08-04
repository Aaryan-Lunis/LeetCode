/**
 * Function to join two arrays of objects by id
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    let map = {};

    
    arr1.forEach(obj => map[obj.id] = obj);

    
    arr2.forEach((obj) => {
        if (map[obj.id]) {
            
            map[obj.id] = { ...map[obj.id], ...obj };
        } else {
           
            map[obj.id] = obj;
        }
    });

   
    return [...Object.values(map)];
};



// First array of objects
const arr1 = [
    { id: 1, name: "Aaryan" },
    { id: 2, name: "Riya" }
];

// Second array of objects
const arr2 = [
    { id: 2, age: 21 },
    { id: 3, name: "Sam" }
];

// Run the function
const result = join(arr1, arr2);

// Print the result
console.log(result);
