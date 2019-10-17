let counter=5;
var interval = setInterval(() => {console.log(counter);counter--;if(counter < 0 ){clearInterval(interval);console.log('Ding!');};}, 1000);
