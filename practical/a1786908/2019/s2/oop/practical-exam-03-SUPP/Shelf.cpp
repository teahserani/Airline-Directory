
#include "Shelf.h"
#include <string>
using namespace std; 
Shelf::Shelf(){
	width=0;
} // default constructor
Shelf::Shelf(int width){
	this->width=width;
}// constructor for shelf with given width in centimetres

int Shelf::get_width(){
	return width;
}  // returns the width of the shelf in centimetres

// returns the number of Music boxes currently on the shelf
int Shelf::get_number_of_music_boxes(){

} 
// returns a dynamic array of the music boxes currently on the shelf
Music_box* Shelf::get_contents(){

}

// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool Shelf::add_music_box(Music_box a_music_box){
}
 
Shelf::~Shelf(){

}