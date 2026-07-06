console.log(module.exports);
console.log(module.exports === exports);

console.log(exports);

console.log(module);

//module.exports ka shorthand hota he exports  if we write both then module.exports will be exported not exports because it overrides the exports object.

// in cjs the module.exports is the object that is actually returned as the result of a require call. The exports variable is just a reference to module.exports. If you assign a new value to exports, it will not change module.exports, and thus will not affect what is exported from the module.
//in cjs its slow because it has to resolve the module.exports object and then return it, while in esm it can directly return the exports object.
//in cjs it first go and check require and then run the code of all file but in esm it first parallelly load all the files and then run the code of all files. so esm is faster than cjs.