class Human{
    gender= 'female';

    printGender = () => {
        console.log(this.gender);
    }
}

class Person extends Human {
    name='Raj';
    //this.gender='male';

    printMyName() {
        console.log(this.name);
    }
}

const person = new Person();
person.printMyName();
person.printGender();

const numbers= [1,2,3];
const newnumbers= [...numbers,4];

console.log(newnumbers);

const a={
    name: 'abc' 
};

const b={
    ...a,
    age:28
}

console.log(b);


const num= [1,2,3];

const doublenum= num.map((num) => {             //map is a build in array method
    return num*2;
})

console.log(doublenum);
