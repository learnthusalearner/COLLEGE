"use strict";
// Initialize an empty Map with string keys and User values
const usersMap = new Map();
// Add users to the map using .set
usersMap.set('abc123', { id: 'abc123', name: 'John Doe' });
//usersMap.set('abc123', { id: 'abc12321', }); // to catch error like this User typr is created
usersMap.set('xyz789', { id: 'xyz789', name: 'Jane Doe' });
usersMap.delete('xyz789');
// Accessing a value using .get
console.log(usersMap.get('abc123')); // Output: { id: 'abc123', name: 'John Doe' }
console.log(usersMap.get('xyz789')); // Output: undefined cause deleted
