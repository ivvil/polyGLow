{ pkgs ? import <nixpkgs> {}}:
pkgs.mkShell {
  buildInputs = with pkgs; [
    cmakeCurses
    cmake-language-server
    glfw
  ];

}
