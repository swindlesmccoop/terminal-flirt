# Have your terminal flirt with you

## Configuration
Edit `config.h` and uncomment the line with the girl type you want. You can also disable colors by commenting out the `COLORIZE` definition.

## Install
```
make
sudo make install
```

### Bash
Add
```bash
trap flirt DEBUG
```
to your bashrc.

### Zsh
Add
```zsh
preexec() {flirt;}
```
to your zshrc.

## Todo
- [x] ~~Add `config.h` option to enable/disable colors
  - Done by @Kusoneko
- [ ] Add way to enable multiple archetypes at once
- [ ] Add more strings
