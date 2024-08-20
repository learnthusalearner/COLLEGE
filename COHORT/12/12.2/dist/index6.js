"use strict";
// Function that accepts only 'click' and 'mousemove' events
const handleEvent = (Events) => {
    console.log(`Handling event: ${Events}`);
};
handleEvent('click'); // OK
//handleEvent('scroll'); // Error: Argument of type '"scroll"' is not assignable to parameter of type 'ExcludeEvent'.
