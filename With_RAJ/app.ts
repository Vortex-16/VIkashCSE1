interface user{
    name: string,
    age: number,
    gender?: string,
}
function loginUser(obj: user){
    console.log(obj.name)
    console.log(obj.age)
    console.log(obj.gender)
}

loginUser({name:"Alpha Coders",age:19,gender:"male"})