const nextSevenDays = givenDay => [...Array(7).keys()].map(days => new Date((givenDay + 86400000) + 86400000 * days).toLocaleString());
