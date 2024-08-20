type Events = 'click'|'scroll'|'mousemove';
// Using Exclude to create a new type without 'scroll'
type ExcludeEvent = Exclude<Events, 'scroll'>; // 'click' | 'mousemove'

// Function that accepts only 'click' and 'mousemove' events
const handleEvent = (Events: ExcludeEvent) => {
  console.log(`Handling event: ${Events}`);
};

handleEvent('click'); // OK
//handleEvent('scroll'); // Error: Argument of type '"scroll"' is not assignable to parameter of type 'ExcludeEvent'.