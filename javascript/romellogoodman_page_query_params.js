const pageQueryParams = () => document.location.search.replace(/(^\?)/, '').split('&').reduce((o, n) => (n => o[n[0]] = n[1])(n.split('=')) && o, {}) || {};
