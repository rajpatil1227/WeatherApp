const data ={
    name : "Raj",
    Age : 20,
    About : "Web Developer"
};

const jsonData = JSON.stringify(data);     //stringify => object to JSON
console.log(jsonData);

const objData = JSON.parse(jsonData);           //stringify => JSON to object
console.log(objData);
console.log(objData.About);
