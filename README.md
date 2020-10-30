# Phantom

An ortholinear WASD optimized gaming keypad

<div align="center">
  <img src="https://i.imgur.com/5DrMXtA.jpg" alt="Geopad" width="838"/>
</div>

## Design Files
I have now added these design files on the cloud
1. PCB (EasyEDA) - https://easyeda.com/geocipher/phantom

## Compiling

This keyboard supports *via* , just compile the *via* keymap through `qmk`. Or, flash the built `geopad_via.hex`.

```
qmk compile -kb geopad -km via
make geocine/phantom:via
```
Once via is running you can import the keymap `firmware/keymaps/via/phantom.json`