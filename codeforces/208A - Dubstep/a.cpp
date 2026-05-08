#include <iostream>
#include <sstream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string song;
  cin >> song;
  while(song.find("WUB") != song.npos) {
    song.replace(song.find("WUB"), 3, " ");
  }
  stringstream ss(song);
  string curr;
  ss >> curr;
  cout << curr;
  while(ss >> curr) {
    cout << " " << curr;
  }
  return 0;
}
