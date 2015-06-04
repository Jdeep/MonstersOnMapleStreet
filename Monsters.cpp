#include "monsters.h"

#include <string>
using namespace std;


monsters::monsters()
{
}


monsters::~monsters()
{
}



void monsters::IntroDisplay()
{
	string intro = "There is a fifth dimension beyond that which is known to man. It is a dimension as vast as space, and as timeless as infinity. It is the middle ground between \nlight and shadow - between science and superstition. And it lies between the pitof man's fears and the summit of his knowledge. This is the dimension of \nimagination. It is an area which we call the Twilight Zone.";

	string mapleInto = "Which reads, \"Maple Street.\" It's a tree-lined, quiet residential American street, very typical of the small town. The houses have front porches on which people sit and swing on gliders, conversing across from house to house. You polishe your car parked in front of your house. your neighbor, Don Martin, leans against the fender watching you. A Good Humor man rides a bicycle and is just in the process of stopping to sell some ice cream to a couple of kids. Two women gossip on the front lawn. Another man waters his lawn.";

	string maple = "Maple Street, U.S.A., late summer. A tree-lined little world of front porch gliders, hop scotch, the laughter of children, and the bell of an ice cream vendor.";
	cout << intro<<endl;
	system("pause");
	cout << endl << mapleInto << endl;
	system("pause");
	cout<< endl<<maple << endl;
}

void monsters::Meteor()
{
	string meteorConvo = "At the sound of the roar and the flash of light it will be precisely 6:43 P.M. on Maple Street. At this moment one of the little boys, Tommy, looks up to listen to a sound of a tremendous screeching roar from overhead. A flash of light plays on both their faces and then it moves down the street past lawns and porches and rooftops and then disappears.\n";
	cout << meteorConvo;
	system("pause");
	string steveDonMeteor1 = "\nYOU: What was that? A meteor?\n DON: That's what it looked like. I didn't hear an crash, though, did you?\nYOU: Nope. I didn't hear anything except a roar.\n";
	cout << steveDonMeteor1;
	system("pause");
	string SteveMrsMeteor = "\nMRS.BRAND:(from her porch)Steve? What was that?\nYou:(raising your voice and looking toward porch) Guess it was a meteor, honey. Came awful close, didn't it?\nMRS.BRAND:Too close for my money! Much too close.\n"
		; cout << SteveMrsMeteor;
	system("pause");
	string electricityMeteor = "\nYou hear voices creep up from down below, small, mildly disturbed voices, highlighting these kinds of phrases:\nElectricity's off.\nPhone won't work.\nCan't get a thing on the radio.\nMy power motor won't move,\nwon't work at all.\nRadio's gone dead.\n";
	cout << electricityMeteor;
	system("pause");
	string MeteorSetting2 = "\nWhile out on the curb you see Pete Van Horn,  A tall, thin man who is standing in front of his house.\nVan Horn:I'll cut through the backyard...See if the power's still on on Floral Street. I'll be right back.\nAs he walks past the side of his house and disappears into the backyard. You look at the hammer on his belt.\nUntil we're looking at ten or eleven people standing around the street and overflowing to the curb and sidewalk. In the background is your car.\n";
	cout << MeteorSetting2;
	system("pause");
	string electricity = "\nCHARLIE: Doesn\'t make sense. Why should the power go off all of a sudden, and the phone line?\nDON: Maybe some sort of an electrical storm or something.\nCHARLIE:That don\'t seem likely. Sky\'s just as blue as anything. Not a cloud. No lightning. No thunder. No nothing. How could it be a storm? Plus I can\'t get a thing on the radio. Not even the portable.\n"
		; cout << electricity;
	system("pause");
	string leaving = "\nCHARLIE:Well why don\'t you go downtown and check with the police, though they\'ll probably think we're crazy or something. A little power failure and right away we get all flustered and everything.\n\nYOU:\n1:agree to go downtown\n2:Suggest to wait it out\n";
	int response;
	cout << leaving;
	cin >> response;
	if (response == 1){
		cout << "YOU:I'll run downtown. We'll get this all straightened out.\n You walk over to your car, get in and turn the key.";
		cout << "The crowd watches you from the other side of your car. You start the engine. It turns over sluggishly and then just stops dead. You try it again and this time you can't get it to turn over. Then, very slowly and reflectively, you turn the key back to \"off\" and then slowly get out of the car.\n";
		system("pause");
		cout << "\nYOU: It's just as if... everything has stopped. Come on Charlie, we better walk downtown.\nYou turn to leave when suddenly you hear a voice behind you call out\n";
		cout << "TOMMY: Mr. Brand...you better not!\nYOU: Why not?\n : They don't want you to.\n You and Charlie exchange a grin, and you look back toward the boy. \nYOU: Who doesn\'t want us to?\n";
		system("pause");

		cout<<"\nTOMMY:(jerks his head in the general direction of the distant horizon)Them!\nYOU: Them ?\nCHARLIE: Who are them ?\nTOMMY: Whoever was in that thing that came by overhead. \nyou knit your brows for a moment, cocking his head questioningly.His voice is intense.\n";
		tommy();
	}
	else{
		cout << "\nYOU: Everybody calm down, I'm sure that this is nothing to get worked up over. If the power still isn't back by tomorrow then we'll go see what's going on\n";
		cout << "The crowd murmurs quietly in agreement and the people disperse, going back to their homes.\n";
		exit(0);

			//more stuff 
	}

	
}
void monsters::tommy(){
	cout << "\nTOMMY: Whoever was in the thing that came over.I don't think they want us to leave here./nCHARLIE: What do you mean? What are you talking about?\nTOMMY: They don't want us to leave. That's why they shut everything off.\nCHARLIE:	What makes you say that ? Whatever gave you that idea ?\n	";
	system("pause");
	cout << "\nTommy:It\'s always that way, in every story I ever read about a ship landing from outer space.\nCHARLIE:	Go ahead, Tommy.We'll be right back. And you'll see.That wasn't any ship or anything like it. That was just a...a meteor or something. Likely as not--No doubt it did have something to do with all this power failure and the rest of it. Meteors can do some crazy things.Like sunspots.\n";
	system("pause");
	cout << "\nDon:	Sure.That's the kind of thing - like sunspots. They raise Cain with radio reception all over the world. And this thing being so close - why there's no telling the sort of stuff it can do.	Go ahead, Charlie.You and Steve go into town and see if that isn't what's causing it all.\nTommy:Mr.Brand...please don't leave here. You might not even be able to get to town. It was that way in the story. Nobody could leave. Nobody except--\n";
	cout << "Except the people they'd sent down ahead of them. They looked just like humans. And it wasn't until the ship landed That was the way they prepared things for the landing. They sent four people. A mother and a father and two kids who looked just like humans...but they weren't.\n";
	int temp;
	cout << "Do you want to ignore Tommy and go to town anyway or stay back?\n1 go to town\n2 stay";
	cin >> temp;
	if (temp == 2)
		lesGoodman();
	else{
		cout << "You and Charlie begin to leave maple street, leaving Tommy and the rest watching on.You turn on to Floral Street, no longer in sight of the others.Nothing seems out of the ordinary, and you’re about to go report back when you are approached by two figures.\n";
		system("pause");
		cout << "Figure 1: You two, you are from Maple Street, correct ?\nYou: Why yes, that’s right.How did you know ?\nFigure 2	We have been watching you for a very long time now. We are afraid that you cannot return there.\nCharlie: Hey, just who are you guys anyway, and what do you mean we can’t go back?!\nFigure 1: The boy Tommy was correct, that wasn’t a normal meteor earlier.It was us. And now that you have left your fates have already been sealed\n";
		system("pause");
		cout << "Suddenly a flash of light.Where You and Charlie once stood a cloud of steam can be seen slowly evaporating into the afternoon air.Where the aliens stood are instead two people who appear exactly as Charlie and You did only moments before.The man who appears to be Charlie puts a strange device away and looks at his companion for a brief second before they begin to slowly head back towards maple street.";

	}


}
void lesGoodman(){

}

void main(){
	monsters h;
	h.IntroDisplay();
	h.Meteor();
	
}

