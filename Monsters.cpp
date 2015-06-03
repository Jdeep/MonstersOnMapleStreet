
#include string;
using namespace std;

#include Monsters.h

IntroDisplay()
{
  string intro="There is a fifth dimension beyond that which is known to man. It is a dimension as vast as space, and as timeless as infinity. It is the middle ground between light and shadow - between science and superstition. And it lies between the pit of man's fears and the summit of his knowledge. This is the dimension of imagination. It is an area which we call the Twilight Zone.";
  
  string mapleInto="Which reads, \"Maple Street.\" It's a tree-lined, quiet residential American street, very typical of the small town. The houses have front porches on which people sit and swing on gliders, conversing across from house to house. You polishe your car parked in front of your house. your neighbor, Don Martin, leans against the fender watching you. A Good Humor man rides a bicycle and is just in the process of stopping to sell some ice cream to a couple of kids. Two women gossip on the front lawn. Another man waters his lawn."
 
  string maple="Maple Street, U.S.A., late summer. A tree-lined little world of front porch gliders, hop scotch, the laughter of children, and the bell of an ice cream vendor.";
 
  cout<<intro<<endl<<mapleIntro<<endl<<maple<<endl;
}

Meteor()
{
  string meteorConvo="At the sound of the roar and the flash of light it will be precisely 6:43 P.M. on Maple Street. At this moment one of the little boys, Tommy, looks up to listen to a sound of a tremendous screeching roar from overhead. A flash of light plays on both their faces and then it moves down the street past lawns and porches and rooftops and then disappears.\n";
  cout<<meteorConvo;
  system("pause");
  string steveDonMeteor1="YOU: What was that? A meteor?/n DON: That's what it looked like. I didn't hear an crash, though, did you?\n YOU: Nope. I didn't hear anything except a roar.";
  cout<<steveDonMeteor1;
  system("pause");
  string SteveMrsMeteor="MRS.BRAND:(from her porch)Steve? What was that?\nYou:(raising your voice and looking toward porch) Guess it was a meteor, honey. Came awful close, didn't it?\nMRS.BRAND:Too close for my money! Much too close.\n"
  cout<<SteveMrsMeteor;
  system("pause");
  string electricityMeteor="\nYou hear voices creep up from down below, small, mildly disturbed voices, highlighting these kinds of phrases:\nElectricity's off.\nPhone won't work.\nCan't get a thing on the radio.\nMy power motor won't move,\nwon't work at all.\nRadio's gone dead.\n";
  cout<<electricityMeteor;
  system("pause");
  string MeteorSetting2="While out on the curb you see Pete Van Horn,  A tall, thin man who is standing in front of his house.\nVan Horn:I'll cut through the backyard...See if the power's still on on Floral Street. I'll be right back.\nAs he walks past the side of his house and disappears into the backyard. You look at the hammer on his belt.\nUntil we're looking at ten or eleven people standing around the street and overflowing to the curb and sidewalk. In the background is your car.";
  cout<<MeteorSetting2;
  system("pause");
  string electricity="CHARLIE: Doesn\'t make sense. Why should the power go off all of a sudden, and the phone line?\nDON: Maybe some sort of an electrical storm or something.\nCHARLIE:That don\'t seem likely. Sky\'s just as blue as anything. Not a cloud. No lightning. No thunder. No nothing. How could it be a storm? Plus I can\'t get a thing on the radio. Not even the portable.\n"
  cout<< electricity;
  system("pause");
  string leaving="CHARLIE:Well why don\'t you go downtown and check with the police, though they\'ll probably think we're crazy or something. A little power failure and right away we get all flustered and everything.\nYOU:\n 1:agree to go downtown\n2:Suggest to wait it out\n";
  string response;
  cout<<leaving;
  cin>>response;
  if(response==1){
    cout<<"YOU:I'll run downtown. We'll get this all straightened out.\n You walk over to your car, get in and turn the key.";
    cout<<"the crowd watches you from the other side of your car. You start the engine. It turns over sluggishly and then just stops dead. You try it again and this time you can't get it to turn over. Then, very slowly and reflectively, you turn the key back to \"off\" and then slowly gets out of the car.";
    system("pause");
  }
  else{
    
  }

  
  
}
