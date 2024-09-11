#!/usr/bin/node
/* Get the arguments array from process.argv */
const args = process.argv;
if (args[2]) {
  console.log(args[2]);
} else {
  console.log('No argument');
}
