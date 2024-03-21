#include <bits/stdc++.h>
using namespace std;
#define str string

class Song {
    public: str id, name, artist, album;
    public: Song(str i, str n, str ar, str al){
        id = i;
        name = n;
        artist = ar;
        album = al;
    }
};

list<Song> songs;

void addSong(str id, str name, str artist, str album){
    Song song(id,name,artist,album);
    songs.push_back(song);
}

void showAllSongs(){
    cout << "=== Playlist ===\n\n";
    for (auto it = songs.begin(); it != songs.end(); it++){
        cout << "ID: " << it->id << "\n";
        cout << "Song: " << it->name << "\n";
        cout << "Artist: " << it->artist<< "\n";
        cout << "Album: " << it->album << "\n";
        cout << "\n";
    }
}

void playSong(str id){
    cout << "> Playing...\n";
    for (auto it = songs.begin(); it != songs.end(); it++){
        Song song = *it;
        if (song.id == id){
            cout << "Playing song: " << song.name << "\n";
            cout << "Artist: " << song.artist << "\n";
            cout << "Album: " << song.album << "\n";
            break;
        }
    }
}

void removeSong(str id){
    for (auto it = songs.begin(); it != songs.end(); it++){
        Song song = *it;
        if (song.id == id){
            songs.erase(it);
        break;
        }
    }
}


int main(){
    addSong("LCTS2", "Lose Control", "Teddy Swins", "I've Tried Everything");
    addSong("BTBB5", "Beautiful Things", "Benson Boone", "Single");
    addSong("CSTS1", "Cruel Summer", "Taylor Swift", "Lover");
    showAllSongs();
    playSong("CSTS1");
    removeSong("BTBB5");
    showAllSongs();
    return 0;
}