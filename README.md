# Neopixel Shield driver for mbed.js

To install, run in your mbed-js gulp based project:

```
$ npm install mbed-js-neopixel-shield --save
```

And rebuild.

## Usage

```js
var shield = new NeopixelShield();

shield.Green(30 /* intensity */, 40 /* number of pixels */);

// to set individual pixels
shield.SetPixel(1 /* pixel */, 0xff0000 /* color */);
shield.Flush();
```
