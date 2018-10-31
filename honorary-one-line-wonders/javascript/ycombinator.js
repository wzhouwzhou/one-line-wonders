var Fix = function (f) {
    return function (x) {
        return x(x);
    }(function (x) {
        return f(
            function (a) { return (x(x))(a); }
        );
    });
};


var fac = Fix(function(f){
    return function(n){
        if(n !== 0){
            return n * f(n-1);
        } else {
            return 1;
        }
    }
});

console.log(fac(2));
console.log(fac(8));
