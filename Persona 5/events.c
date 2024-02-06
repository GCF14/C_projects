#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/********* 
INSTRUCTIONS 

To call an event, make use of the following function

void triggerEvent(int characterNo,int type)

characterNo:
1 - Sojiro Sakura
2 - Ryuji Sakamoto
3 - Ann Takamaki
4 - Yusuke Kitagawa
5 - Makoto Niijima
6 - Futaba Sakura
7 - Haru Okumura
8 - Tae Takemi
9 - Sadayo Kawakami
10 - Sumire Yoshizawa

type:
1 - Unlock
2 - MAX Event
**************************/

typedef char p5_string[201];

void pauseText()
{
	fflush(stdin);
	getch();
	system("cls");
}

void clean(p5_string st)
{
	int i,len = strlen(st);
	st[len-1] = '\0';
}

int isDigit(p5_string val)
{
	int len = strlen(val);
	int i = 0, isDigit = 1;
	
	while (i < len && isDigit)
	{
		if (!(val[i] >= '0' && val[i] <= '9'))
			isDigit = 0;
		else
			i++;
	}
	
	return isDigit;

}

int getOption()
{
	p5_string input;
	int val;
	
	fflush(stdin);
	
	printf ("\n");
	printf ("Choice: ");
	fgets(input,sizeof(input),stdin);
	
	clean (input);
	if (isDigit(input))
	{
		val = atoi(input);
		return val;
	}
	else
		return 0;
}

/******** UNLOCK EVENTS ********/
void unlockPrint()
{
	system("cls");
	printf ("*************************\n");
	printf ("***CONFIDANT UNLOCKED!***\n");
	printf ("*************************\n\n");
}
void unlockSOJIRO()
{
	unlockPrint();
	printf("Sojiro: Ah! Ren! So I see you're back here and you'll be spending the next couple \n");
	printf("of months here again, like the good ol' days.\n");
	printf("\n");
	printf("*Sojiro approaches you and hands you a notebook that looks rather familiar*\n");
	printf("\n");
	printf("Sojiro: Here, I kept it for you so you can use it to keep track of things before \n");
	printf("you left off. I also made sure your room is all clean and well. \n");
	printf("In fact, I have a surprise for Morgana too!\n");
	printf("\n");
	printf("Morgana: Oooh! I love surprises!\n");
	printf("\n");
	pauseText();
	printf("Sojiro: Anyway, if you are able to spare some time to help out in the café in the \n");
	printf("midst of your preparation for your college entrance exams, I'd really appreciate it.\n");
	printf("\n");
	printf("Morgana: Hear that, Ren? Maybe if you help Sojiro out, he'll give me more surprises!\n");
	printf("\n");
	printf("Sojiro: Hahaha, well that cat never lost his meows, I suppose. \n");
	printf("Best not to get into any trouble now!\n");
	printf("\n");
	printf("*** SOJIRO SAKURA IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockRYUJI()
{	
	unlockPrint();
	printf("*As you approach the gym, you are greeted by a blonde haired individual who appears \n");
	printf("to be rushing towards you*\n");
	printf("\n");
	printf("Ryuji: Hey Ren! Long time no see! I heard you were coming but I'm a little upset \n");
	printf("that we did not end up being in the same section.\n");
	printf("\n");
	printf("Ryuji: Hey, how's preppin' for the college entrance exams? I heard that the exams \n");
	printf("this year are going to be even harder than any exam we've ever had. \n");
	printf("I mean…yeah, we've got some studying to do right? Hoo boy.\n");
	printf("\n");
	printf("Ryuji: Anyhow, I'm back in the track team too. Hey, let's train together if you're \n");
	printf("free. Studying can get pretty boring if you overdo it to be honest with you.\n");
	printf("\n");
	printf("*** RYUJI SAKAMOTO IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockANN()
{
	unlockPrint();
	printf("*As you entered the underground mall, you spot a crew of photographers and what \n");
	printf("looked like to be models around the area. You suddenly hear a familiar voice calling \n");
	printf("out to you.*\n");
	printf("\n");
	printf("Ann: Ren! Is that you?\n");
	printf("\n");
	printf("*You turn around and see Ann smiling and walking towards you*\n");
	printf("\n");
	printf("Ann: Ren! It's sooo good to see you again! It's been a long time!\n");
	printf("\n");
	printf("Morgana: Lady Ann! I've missed you! You're looking as good as ever!\n");
	printf("\n");
	printf("Ann: Awwww, thanks Morgana! I missed you too!\n");
	printf("\n");
	printf("Morgana: Mreeooooooowr!\n");
	printf("\n");
	pauseText();
	printf("Ann: Hey, I currently have a bunch of photoshoots lined up. \n");
	printf("It can get pretty exhausting though. Hey, when you're not too busy, \n");
	printf("could you come drop by? We could hang out or something.\n");
	printf("\n");
	printf("Photographer: Takamaki-san! You're up!\n");
	printf("\n");
	printf("Ann: Oh, sorry. That's my call. I'll see you around, Ren! You too, Morgana!\n");
	printf("\n");
	printf("Morgana: Ahhh, Lady Ann. Nice to see her again.\n");
	printf("\n");
	printf("*** ANN TAKAMAKI IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockYUSUKE()
{
	unlockPrint();
	printf("*As you enter the train station, you spot a tall and slender familiar looking \n");
	printf("young man close to your age standing by the corner. He seems deep in thought as \n");
	printf("he examines individuals crossing in and out of the platforms.\n");
	printf("\n");
	printf("He then notices you looking at him and smiles.*\n");
	printf("\n");
	printf("Yusuke: Ren! It has been quite some time since we've seen each other. \n");
	printf("I've heard news that you were in Tokyo again but fates haven't been kind \n");
	printf("enough to let our paths cross...that is until now.\n");
	printf("\n");
	pauseText();
	printf("*He gazes back at the crowd*\n");
	printf("\n");
	printf("Yusuke: You see, I am in dire need of inspiration for my next art piece. \n");
	printf("Perhaps seeing the crowd and their mixture of emotions will help me come up \n");
	printf("with the inner thoughts that I will need for my work. Do you suppose you could \n");
	printf("help me out when you are able to?\n");
	printf("\n");
	printf("*He then pauses and puts a hand in his pocket*\n");
	printf("\n");
	printf("Yusuke: Also, I am sometimes a bit short on cash. Do you think you could also \n");
	printf("help me get some cash for my train rides home? I tend to have a need for some art\n");
	printf("materials that require my monetary resources every now and then.\n");
	printf("\n");
	printf("*** YUSUKE KITAGAWA IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockMAKOTO()
{
	unlockPrint();
	printf("*A slender young woman with short bob cut hair spots you and waves. \n");
	printf("She looks familiar.*\n");
	printf("\n");
	printf("Makoto: Ren! I heard that you were back here in Shujin Academy. \n");
	printf("Fancy seeing you here again, in the library of all places!\n");
	printf("\n");
	printf("*She motions you to sit down on the chair beside her.*\n");
	printf("\n");
	printf("Makoto: I know you're surprised to see me as well. I'm here in Shujin because \n");
	printf("I'm conducting a research project for one of my university subjects regarding \n");
	printf("\n");
	pauseText();
	printf("Makoto: how students balance their extra-curricular activities and their academic \n");
	printf("work. I've actually asked Ann and Ryuji's help for my study, considering Ann is \n");
	printf("able to be a part-time model while Ryuji is part of the track team. \n");
	printf("\n");
	printf("Makoto: Of course, I'm not sure if the both of them are the perfect examples of \n");
	printf("balance, because academically wise...well...they always needed some guidance in \n");
	printf("that department.\n");
	printf("\n");
	printf("*She looks at the books nearby and motions you towards the books about reviews \n");
	printf("books for college entrance exams*\n");
	printf("\n");
	printf("Makoto: Speaking of guidance, if you are in need of any help studying for your \n");
	printf("entrance exams, I'd be glad to provide you with some. If you happen to be in the \n");
	printf("library while I'm here, I'd be more than happy to help you understand some concepts \n");
	printf("that you might need help with.\n");
	printf("\n");
	printf("*** MAKOTO NIJIMA IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockFUTABA()
{
	unlockPrint();
	printf("*As you settled into LeBlanc, a familiar voice follows the ringing of the door's \n");
	printf("entrance bells*\n");
	printf("\n");
	printf("Futaba: Hey Sojiro! I hunger. I want some curry if...\n");
	printf("\n");
	printf("*The small built orange haired girl with glasses rushes over to you and gives you \n");
	printf("a squeeze*\n");
	printf("\n");
	printf("Futaba: REN! IT'S BEEN LIKE...FOREVER! Hey, I've heard from Sojiro that you're \n");
	printf("always here but I never see you whenever I'm here. I don't see you in school either! \n");
	printf("Have you been avoiding me because you owe me a year's supply of instant noodles?\n");
	printf("\n");
	pauseText();
	printf("Sojiro: Now, now. Don't scare him, Futaba. He's got a lot on his plate preparing for\n");
	printf("his college entrance exams.\n");
	printf("\n");
	printf("Futaba: Oh right! You're going to college soon. Welp, I guess that means you'll have \n");
	printf("to do a lot of studying. But hey, if you're not too busy, maybe you could watch some\n");
	printf("anime with me! I have a nice collection of them, and I've gotten more since we've \n");
	printf("last met.\n");
	printf("\n");
	printf("*Futaba smiles but then turns to Sojiro, giving him a serious look*\n");
	printf("\n");
	printf("Futaba: Now for the task at hand. Sojiro...curry...famished...please...thank you!\n");
	printf("\n");
	printf("*** FUTABA SAKURA IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockHARU()
{
	unlockPrint();
	printf("*As you enter the gardens, you spot what looks like a student who appears to be an \n");
	printf("alumni conversing with a teacher. Upon the end of their conversation, you finally \n");
	printf("make out the figure of the alumni who appears to be someone familiar*\n");
	printf("\n");
	printf("Haru: Ren-kun! It's a charm to see you here again! Just earlier, I caught up with \n");
	printf("Mako-chan just a while earlier, and I was surprised to see her conducting her \n");
	printf("research project here too!\n");
	printf("\n");
	printf("Morgana: Haru! It's been a while since I've seen you!\n");
	printf("\n");
	printf("Haru: Thanks, Mona-chan! So glad to see you and Ren-kun are doing all right! \n");
	pauseText();
	printf("Haru: By the way, I was just talking to Mr. Hiruta earlier. He said that he'd allow me\n");
	printf("to conduct experiments to help me find a way to aid plants in producing more fruits \n");
	printf("or vegetables!\n");
	printf("\n");
	printf("Morgana: Still into plants, I see...\n");
	printf("\n");
	printf("Haru: I'd like to perform these experiments as they will help in both my studies \n");
	printf("and in producing ingredients for Okumura Foods. Do you think you could help me when\n");
	printf("you're free? I'd really appreciate it.\n");
	printf("\n");
	printf("*Haru then turns to the plants*\n");
	printf("\n");
	printf("Haru: Well, I'll work on these plants now. Let's have a chat when you're not too \n");
	printf("busy, Ren-kun! You too, Mona-chan. *giggle*\n");
	printf("\n");
	printf("*** HARU OKUMURA IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockTAKEMI()
{
	unlockPrint();
	printf("*As you enter the clinic, you spot the group of interns huddled together as what \n");
	printf("appears to be the lead doctor can be seen blurting out instructions to the group.*\n");
	printf("\n");
	printf("Takemi: Prescribe some amoxicillin immediately, 1000 milligrams and 30 milligrams \n");
	printf("of lansoprazole every 8 hours for the next two weeks. Make sure that the patient \n");
	printf("does not miss a dosage.\n");
	printf("\n");
	printf("*Takemi spots you and smiles as her interns scramble to move towards a patient. \n");
	printf("She motions you to come forward*\n");
	printf("\n");
	pauseText();
	printf("Takemi: My, my. My little guinea pig is here again. It's been a while since I've\n");
	printf("seen you.\n");
	printf("\n");
	printf("*She glances at the interns and the patient nearby*\n");
	printf("\n");
	printf("Takemi: Oh, don't mind them. Just a stomach infection caused by Helicobacter \n");
	printf("Pylori. They should be back on their feet in no time, provided they don't misuse \n");
	printf("the antibiotics I instructed them to prescribe.\n");
	printf("\n");
	pauseText();
	printf("Takemi: Hey, as long as you're here, and seeing as you've helped me in the past, \n");
	printf("do you think you could help me out again? I'm working on a new medicine that will \n");
	printf("supposedly help out in curbing the recent surge in superbug infections. \n");
	printf("Seems more than a couple of folks have been taking antibiotics for even \n");
	printf("the seasonal cold.\n");
	printf("\n");
	printf("*You feel a slight sense of dread cross you as she picks up a syringe lying nearby*\n");
	printf("\n");
	printf("Takemi: Don't worry though. I promise, I won't take as much blood samples as I \n");
	printf("did in the past...I just need your help for some manpower. No pressure though. \n");
	printf("Only if you have time, although I'd gladly appreciate it.\n");
	printf("\n");
	printf("*Takemi then walks off and puts some medicine into the syringe before injecting \n");
	printf("it to another patient. You are relieved that the syringe was not meant for you.*\n");
	printf("\n");
	printf("*** TAE TAKEMI IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockKAWAKAMI()
{
	unlockPrint();
	printf("*As you enter LeBlanc Cafe, you spot a woman who looks slightly older than you \n");
	printf("speaking to Sojiro. They both look at you as you enter the cafe and realize that \n");
	printf("the woman was your previous teacher.*\n");
	printf("\n");
	printf("Sojiro: Ah, Ren! Welcome back. Looks like you have a visitor. Ms. Kawakami is here \n");
	printf("today.\n");
	printf("\n");
	printf("*Kawakami approaches you*\n");
	printf("\n");
	printf("Kawakami: Amamiya-kun! It is nice to see that you are doing well. I've received word\n");
	printf("from the faculty department that you have been putting in a lot of effort in your \n");
	printf("studies lately.\n");
	printf("\n");
	pauseText();
	printf("Sojiro: Oh, you're not Ren's teacher this time around?\n");
	printf("\n");
	printf("Kawakami: No. I'm not assigned to handle the third years who are taking remedial \n");
	printf("courses to prepare for their college entrance exams. However, I've come to give \n");
	printf("Amamiya-kun this.\n");
	printf("\n");
	printf("*Kawakami turns to you and hands what looks like a business card*\n");
	printf("\n");
	printf("Kawakami: I understand that you are very intelligent and knowledgeable, but you \n");
	printf("might need reinforcement lessons for the entrance exams. It's a tutorial service \n");
	printf("for students who are in need of extra sessions to ensure they are well prepared. \n");
	printf("\n");
	pauseText();
	printf("*Kawakami bows and motions towards the payphone*\n");
	printf("\n");
	printf("Kawakami: Do give me a call so I can help you out, even when it's past school hours. \n");
	printf("I believe you'll benefit from these extra lessons. Be good and all the best with \n");
	printf("your studies, Amamiya-kun!\n");
	printf("\n");
	printf("*Sojiro turns to you as Kawakami leaves*\n");
	printf("\n");
	printf("Sojiro: These tutorial sessions look like they will be helpful indeed, but judging\n");
	printf("by the number, it looks like it's only accessible through a landline.\n");
	printf("\n");
	printf("*Sojiro then looks at the payphone* \n");
	printf("\n");
	printf("Sojiro: You could use the payphone to call her up and request her to tutor you...\n");
	printf("it will just cost you 100 yen whenever you do, though. Consider that as helping \n");
	printf("out the business to whenever you do.\n");
	printf("\n");
	printf("*** SADAYO KAWAKAMI IS NOW AVAILABLE! ***\n");
	pauseText();
}

void unlockSUMIRE()
{
	unlockPrint();
	printf("The gym seems more crowded than usual. You can hear whistles being blown and what \n");
	printf("appears to be a group of gymnasts training hard. In the midst of the crowd, you \n");
	printf("spot a red haired girl who appears to be one year lower than you excitedly \n");
	printf("approaching you.\n");
	printf("\n");
	printf("Sumire: Senpai! You're here! I'm so glad...oh...\n");
	printf("\n");
	printf("*Sumire pauses and looks embarrassed as she wipes her forehead*\n");
	printf("\n");
	printf("Sumire: Forgive me for looking very sweaty. There's this meet coming up and I'll \n");
	printf("be one of the representatives of Shujin High. I promised Coach Hiraguchi that \n");
	printf("I would win the meet for the school and she has utmost faith in me that I could\n");
	printf("deliver...although that means a lot of heavy training sessions.\n");
	printf("\n");
	pauseText();
	printf("*Sumire's eyes beam up as if she came up with an idea*\n");
	printf("\n");
	printf("Sumire: Maybe I'll have an easier time if you train alongside me. \n");
	printf("It will make me feel less pressure for the upcoming meet if you're here. \n");
	printf("Will you please train alongside with me?\n");
	printf("\n");
	printf("*Sumire's eyes slightly sink as if she remembers something*\n");
	printf("\n");
	printf("Sumire: Oh, right...you're preparing for your college entrance exams, \n");
	printf("so I've heard. I guess that means you'll be very busy.\n");
	printf("\n");
	pauseText();
	printf("Coach Hiraguchi: Sumire! It's time to re-do your routine. There are somethings \n");
	printf("that could use some improvement.\n");
	printf("\n");
	printf("*Coach Hiraguchi sees you and smiles*\n");
	printf("\n");
	printf("Coach Hiraguchi: Oh! Nice to see you again! Are you here to cheer Sumire on?\n");
	printf("\n");
	printf("Sumire: Coach! No, I...he's...\n");
	printf("\n");
	printf("*Sumire looks flustered*\n");
	printf("\n");
	pauseText();
	printf("Coach Hiraguchi: Anyway, will you excuse Sumire for a while? She has a meet \n");
	printf("coming soon and we need as much training as we can.\n");
	printf("\n");
	printf("Sumire: Yes, ma'am. Immediately!\n");
	printf("\n");
	printf("*Sumire then turns to look at you again*\n");
	printf("\n");
	printf("Sumire: If you're not too busy senpai, drop by and train alongside with me. \n");
	printf("I'd really appreciate it! Well, I must return to training again. See you around, \n");
	printf("senpai!\n");
	printf("\n");
	printf("*** SUMIRE YOSHIZAWA IS NOW AVAILABLE! ***\n");
	pauseText();
}

/************* MAX EVENTS **********/

void unlockMAX()
{
	system("cls");
	printf ("*************************\n");
	printf ("***CONFIDANT MAX LEVEL!**\n");
	printf ("*************************\n\n");
}

void maxSOJIRO()
{
	int nOption;
	fflush(stdin);
	
	nOption = 0;
	do
	{
		system("cls");
		unlockMAX();
	printf("Sojiro: You know, Ren. It's hard to imagine how far you've come. \n");
	printf("It seemed like only yesterday when I begrudgingly took you under my watch, and now \n");
	printf("you're on the verge of heading off to your university of choice.\n");
	printf("\n");
	printf("You:    [1] Does that mean I will have no more curry?\n");
	printf("        [2] I'll miss you...\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	if (nOption == 1) {
		printf("Sojiro: Oh, don't be like that. It's not like you're leaving for good anyway. \n");
	printf("You'll still be able to drop by anytime you wish.\n");
	}
	else {
		printf("Sojiro: Oh, don't be like that. It's not like you're leaving for good anyway. \n");
	printf("You'll still be able to drop by anytime you wish.\n");
	}
	pauseText();
	printf("Sojiro: Anyway, whenever you are free and you plan to drop by, do inform me. \n");
	printf("Who knows, if business permits it, I will continue teaching you the secret to \n");
	printf("making good curry. Maybe, one day, you'll even be the one to take my place. \n");
	printf("*chuckle* I'm kidding of course, but no way to know what the future holds.\n");
	printf("\n");
	printf("*** SOJIRO SAKURA RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxRYUJI()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Ryuji: Hey Ren! Glad you're here. I heard there's this cool new Ramen place \n");
	printf("which gives us a Ramen Bowl souvenir if we are able to have 5 noodle refills. \n");
	printf("Let's go there immediately! It's my treat too!\n");
	printf("\n");
	printf("*You and Ryuji head off to Akihabara to enjoy some Ramen*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Ryuji: Could you imagine? Hakata Ramen all the way from Fukuoka? \n");
	printf("Brings back memories of when we had our long road trip. Hey, do you think \n");
	printf("we'll have a long road trip like that again soon? I kind of miss going around \n");
	printf("Japan with the gang.\n");
	printf("\n");
	printf("You:    [1] Only if you do the driving\n");
	printf("        [2] We could arrange it\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");	if (nOption == 1) {
		printf("Ryuji: Well, I mean, as long as Haru isn't the one behind the wheel, I'd be game.\n");
	}
	else {
		printf("Ryuji: For real?! That would be awesome!!\n");
	}
	pauseText();
	printf("Ryuji: Anyhow, I really hope we continue seeing each other. \n");
	printf("You, me, and the gang. I know Haru and Makoto have already left for their \n");
	printf("university, but I'm glad I still see them around Shujin every now and then. \n");
	printf("You guys have really helped me in so many ways, more than you can imagine.\n");
	printf("\n");
	printf("Morgana: You're welcome, Ryuji!\n");
	printf("\n");
	printf("*Ryuji looks at his food*\n");
	printf("\n");
	printf("Ryuji: But enough being sentimental! Let's eat!\n");
	printf("\n");
	pauseText();
	printf("*After Ren and Ryuji finish their food*\n");
	printf("\n");
	printf("Ryuji: *groan*, I don't think I can eat anything else for the rest of my life.\n");
	printf("\n");
	printf("Attendant: Congratulations! For having a total of 10 noodle refills, \n");
	printf("you get a free souvenir bowl!\n");
	printf("\n");
	printf("Ryuji: The hell? I thought we get 1 for every 5 refills?\n");
	printf("\n");
	pauseText();
	printf("Morgana: Oh Ryuji, you never read do you. It says if you go over 5 refills, \n");
	printf("you get 1 free bowl. Each patron is limited to just 1 souvenir bowl\n");
	printf("\n");
	printf("Ryuji: You mean I could've stopped at 5 already? Ren, you should've eaten some more too!\n");
	printf("\n");
	printf("Morgana: Oh Ryuji, you've never changed. *snicker*\n");
	printf("\n");
	printf("Ryuji: What the hell does that even mean?\n");
	printf("\n");
	printf("*You spent more time with Ryuji and Morgana as they continued to argue*\n");
	printf("\n");
	printf("*** RYUJI SAKAMOTO RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxANN()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Ann: Ren! I have some free time today. Would it be alright to go to Inokashira Park? \n");
	printf("Remember how we went there in the past to enjoy the atmosphere?\n");
	printf("\n");
	printf("Morgana: A lovely date in the park with Lady Ann. I'm on cloud nine right now!\n");
	printf("\n");
	printf("*You and Ann take a train to Inokashira Park*\n");
	printf("\n");
	printf("Ann: You know, I've been thinking so hard about how college is just around \n");
	printf("the corner. At the same time, I'm starting to make a name for myself in the \n");
	printf("modelling world. Sometimes, I wonder, what is the future going to be like? \n");
	printf("Will I have to study abroad for my modelling career? Sounds exciting, right?\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Ann: But then again, I guess that means, we'll all have to go our separate ways. \n");
	printf("You, me, the gang...\n");
	printf("\n");
	printf("You:   [1] We will find a way to see each other again\n");
	printf("       [2] Will you bring us souvenirs? \n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Ann: Well true. I mean, Makoto and Haru are already university students but they \n");
	printf("are still able to drop by and see us every now and then...though I might have a \n");
	printf("harder time, seeing as I will be in another country...\n");
	}
	else {
		printf("Ann: Really? Is that all I am to you? A souvenir shop? Come on!\n");
	}
	pauseText();
	printf("Ann: But anyway, you're right. It's not the first time I was away from you guys \n");
	printf("anyway. We were still able to keep in contact nonetheless. I'm sure there will be \n");
	printf("a lot of opportunities for me to travel back here and see you guys anyway.\n");
	printf("\n");
	printf("Morgana: That is true, Lady Ann! No matter where you are, we will always be with \n");
	printf("you in spirit!\n");
	printf("\n");
	printf("Ann: That's so true, Morgana. Thank you!\n");
	printf("\n");
	printf("Morgana: You're so sweet, Lady Ann!\n");
	printf("\n");
	printf("*Ann Ponders for a moment*\n");
	printf("\n");
	printf("Ann: Hey, what am I saying? I don't even feel ready for the upcoming college \n");
	printf("entrance exams! I have to remember to study as well! Being a model doesn't give \n");
	printf("me an excuse to neglect my studies anyway. After all, being a successful model \n");
	printf("entails being successful in my studies too.\n");
	pauseText();
	printf("Ann: You'll help me with my studies, right Ren? If I get good grades and get into\n");
	printf("a good university, it will open more opportunities for me to travel and meet you \n");
	printf("guys!\n");
	printf("\n");
	printf("*Ann looks at you again with glee*\n");
	printf("\n");
	printf("Ann: By the way, I'm starving. Want to get some snacks? I'm in the mood for \n");
	printf("some cake and desserts! \n");
	printf("\n");
	printf("*You spent a while chatting with Ann and feeling her resolve to become successful \n");
	printf("while having cakes*\n");
	printf("\n");
	printf("*** ANN TAKAMAKI RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxYUSUKE()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Yusuke: Ren! I'm so glad you're here. May I ask if you would come with me to the\n");
	printf("Ueno Art Museum? Don't worry. Sensei gave me money for transportation, enough \n");
	printf("for me to bring a friend along.\n");
	printf("\n");
	printf("*You and Yusuke travel to the Ueno Art Museum*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Yusuke: You know, it finally dawned on me that what I was lacking was not merely \n");
	printf("inspiration. As I look at the crowds in the train station and the crowd staring at \n");
	printf("the paintings, it dawned on me that merely observing other individuals is not enough.\n");
	printf("\n");
	printf("You:   [1] Having enough money is important too?\n");
	printf("       [2] What was it that you were missing?\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Yusuke: Well yes, indeed. But that is to pay for my food and transportation, \n");
	printf("and not to help me with my painting.\n");
	}
	else {
		printf("Yusuke: It dawned on me after spending a lot of time with you.\n");
	}
	pauseText();
	printf("Yusuke: You made me realize that you would spend time with me because you wanted to. \n");
	printf("So I remembered that I should paint because I want to. I love to. \n");
	printf("Just observe all these individuals appreciating that painting. It doesn't look \n");
	printf("like they are being forced to admire such art piece...they are admiring it from the \n");
	printf("bottom of their hearts because they chose to.\n");
	printf("\n");
	printf("Morgana: That's Yusuke alright. He thinks like he's from a different world.\n");
	printf("\n");
	printf("Yusuke: Sort of like when we were together as phantom thieves. Many times we had \n");
	printf("the opportunity to quit and give up, but we all decided to stick together because \n");
	printf("we chose that path. So I should do the same! Why did I love Art in the first place? \n");
	printf("Why did I love painting? I have to express that and show the world through my next \n");
	printf("art piece!\n");
	pauseText();
	printf("Yusuke: I am an artist, and thank you for reminding me, Ren. I will show you that \n");
	printf("my next art piece will be my proclamation of my undying love towards painting. \n");
	printf("That will be my next masterpiece! And I have you to thank, Ren. Thank you, for \n");
	printf("reminding me.\n");
	printf("\n");
	printf("Morgana: Uhhh...sure. I'm certain Ren never really did anything but lend you \n");
	printf("transportation money every now and then, but you do you, Yusuke!\n");
	printf("\n");
	printf("*You spent more time appreciating various Art works with Yusuke in the museum and \n");
	printf("listening to him gush about his next masterpiece before returning home*\n");
	printf("\n");
	printf("*** YUSUKE KITAGAWA RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxMAKOTO()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Makoto: Hey Ren! There's something I'd like to talk to you about. Let's move to a \n");
	printf("place where there is less people.\n");
	printf("\n");
	printf("*You and Makoto move to the currently empty student council room*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Makoto: This place...it brings back memories. I remember, this was the very room \n");
	printf("where I interrogated you about being a phantom thief. Little did I know, I'd \n");
	printf("become one and it would be the moment where it would forever change what I'd become.\n");
	printf("\n");
	printf("You:     [1] You were so scary that time.\n");
	printf("         [2] You don't seem any different.\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Makoto: *chuckle* Well, it was a serious issue that time, and I needed answers. \n");
	printf("I guess I got that imposing attitude from my sister. My bad.\n");
	}
	else {
		printf("Makoto: I don't know what you mean by that, but I'll take that as a compliment, \n");
	printf("thank you.\n");
	}
	pauseText();
	printf("Makoto: You know, up until that point in time, I was more focused on getting good \n");
	printf("grades, studying, and pleasing the teachers. However, I was never really focused \n");
	printf("on what I wanted to do after it. Being with you guys made me realize that there \n");
	printf("was more to life than just studying and making my sister and teachers proud of me.\n");
	printf("\n");
	printf("Makoto: I wanted to become proud of myself too. That's one thing that I learned and \n");
	printf("the reason why I decided to work on this project. I wanted to remind other students \n");
	printf("not to get lost in the midst of all the studying, but to find ways on how to work on\n");
	printf("their passion as well by participating in extracurricular activities.\n");
	printf("\n");
	printf("*Makoto looks at the friendship bracelet Ann gave everyone during their vacation trip*\n");
	pauseText();
	printf("Makoto: Of course, I probably would not have realized this if it weren't for you \n");
	printf("and the phantom thieves. Maybe, things would be different. I'd probably still be \n");
	printf("too busy prioritizing getting good grades and being an honor student had we not met\n");
	printf("each other. Instead, I also make sure to remember what my passion is, and that is \n");
	printf("to work in the police force...to follow the footsteps of my father.\n");
	printf("\n");
	printf("*She then looks at you and smiles*\n");
	printf("\n");
	printf("Makoto: I hope you don't forget your dreams, Ren. Of course, it's easier for me to \n");
	printf("say this to you, considering you're doing quite well with your studies. Same can't \n");
	printf("be said about Ryuji though...but don't tell him I told you this. *chuckle*\n");
	printf("\n");
	printf("*She then heads over to you and hands you a small keychain*\n");
	printf("\n");
	pauseText();
	printf("Makoto: They gave this out in our university fair the other day. I want you to have\n");
	printf("it. I also gave it to the others, but I hope that serves as a reminder that we'll \n");
	printf("always be together as a group, and we'll always work on our hopes and \n");
	printf("dreams together...even if it means helping each other out to accomplish them.\n");
	printf("\n");
	printf("*You and Makoto continued chatting before heading home*\n");
	printf("\n");
	printf("*** MAKOTO NIIJIMA RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxFUTABA()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Futaba: Ren! I'm sooo glad you're here. I've been getting really good grades, \n");
	printf("so Sojiro gave me some money so I could enjoy and buy some things as a reward. \n");
	printf("Could you come with me? I want to go to Akihabara.\n");
	printf("\n");
	printf("*Futaba turns to Sojiro*\n");
	printf("\n");
	printf("Futaba: Hey Sojirooooo! Ren and I are headed to Akihabara.\n");
	printf("\n");
	printf("Sojiro: Okay you two. Just be careful and don't stay out too late.\n");
	printf("\n");
	printf("Futaba: WOHOOO! Akihabara shopping, here I come!\n");
	printf("\n");
	printf("*You and Futaba head over to Akihabara and spend quite some time shopping for \n");
	printf("anime merchandise*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Futaba: You know, I remember the first time I tried to go alone here, I panicked \n");
	printf("and froze. It seems like it happened a long time ago, but that is still fresh in \n");
	printf("my memory. The feeling of being unable to breathe, feeling like my world is \n");
	printf("collapsing, almost passing out, I don't know what would've happened if you and Ryuji\n");
	printf("never showed up to help me.\n");
	printf("\n");
	printf("You:   [1] You've changed for the better.\n");
	printf("       [2] I'm glad you're alright now.\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Futaba: I have you guys to thank. Now, I'm able to go to places with large crowds \n");
	printf("on my own, attend school regularly, and I feel like a normal functioning protagonist\n");
	printf("able to interact with NPCs on a regular basis now!\n");
	}
	else {
		printf("Futaba: I have you guys to thank. Now, I'm able to go to places with large crowds \n");
	printf("on my own, attend school regularly, and I feel like a normal functioning protagonist\n");
	printf("able to interact with NPCs on a regular basis now!\n");
	}
	pauseText();
	printf("*Futaba's gaze moves downards*\n\n");
	printf("Futaba: Still, is it really true that you, Ann, and Ryuji will be leaving for \n");
	printf("college soon? I understand that Inari is also going to be leaving soon. \n");
	printf("Makoto and Haru are in college but they still find time to visit sometimes.\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Futaba: I know we have to keep moving forward, but would it be possible that \n");
	printf("we'll find a way to… still remain together as a group? Our phantom thieving maybe \n");
	printf("a thing of the past, but we still have a lot of miscellaneous side quests and \n");
	printf("post-game content to accomplish, right?\n");
	printf("\n");
	printf("You:    [1] We'll always keep in touch.\n");
	printf("        [2] What are the post-game rewards?\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Futaba: Exactly. In fact, I can make an app that will be exclusive to us ex-phantom\n");
	printf("thieves to help us keep in touch. I just hope Haru learns how to use it properly. \n");
	printf("She does have a difficult time getting accustomed to anything tech-related.\n");
	}
	else {
		printf("Futaba: It depends. I'll leave that up to you to decide. Just make sure that it \n");
	printf("includes my 1 year's supply of instant noodles that you promised!\n");
	}
	pauseText();
	printf("Futaba: Either way, what I'm saying is...I want you guys to be permanent party \n");
	printf("members in my journey. I couldn't imagine how I would be right now if it weren't \n");
	printf("for you guys. So please promise me, you guys will always be a part of my party!\n");
	printf("\n");
	printf("Futaba: It's a deal, right?\n");
	printf("\n");
	printf("*You feel Futaba's resolve*\n");
	printf("\n");
	printf("Futaba: Now that it's settled, let's proceed to our next quest! \n");
	printf("Operation: Obtain-Roast-Chicken-For-Dinner!\n");
	printf("\n");
	printf("*You and Futaba head off and buy Roast Chicken to take home for dinner which you \n");
	printf("shared with Sojiro*\n");
	printf("\n");
	printf("*** FUTABA SAKURA RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxHARU()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Haru: Oh Ren-Kun! I'm glad you're here. Do you think it would be alright if you \n");
	printf("and I catch a movie? There's this movie I'm interested in watching right now. \n");
	printf("It's called 'Jigsaw X'.\n");
	printf("\n");
	printf("Morgana: Uhhh...that movie sounds terrifying.\n");
	printf("\n");
	printf("Haru: Since Halloween is coming, there are a lot of horror movies showing in the \n");
	printf("cinemas right now. It's my treat, Ren-kun. I'll also be taking care of dinner too \n");
	printf("so don't worry about spending anything.\n");
	printf("\n");
	printf("*You and Haru head on over to the Shibuya cinemas and watch the movie. \n");
	printf("During the entire duration of the movie, Morgana hid in Ren's bag*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Haru: That was such a fun movie! I'm so glad you accompanied me. Others find the \n");
	printf("movie too terrifying to watch and I didn't want to go alone. \n");
	printf("\n");
	printf("Morgana: *gulp* Th-that...was...h-horrifying\n\n");
	printf("You:    [1] That was terrifying, Haru...\n");
	printf("        [2] Thanks for inviting me.\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Haru: *giggle* That's what horror movies are supposed to do, right? If it \n");
	printf("wasn't terrifying, it wouldn't be called a horror movie.\n");
	}
	else {
		printf("Haru: I honestly tried inviting Ann-chan and Mako-chan earlier, but they both \n");
	printf("turned me down. They said they didn't like horror movies so I'm glad you came along.\n");
	}
	pauseText();
	printf("Haru: Come on! Let's have some sushi for dinner. Horror movies can make you work up \n");
	printf("an appetite. I hope you're hungry!\n");
	printf("\n");
	printf("Morgana: HOORAY! FATTY TUNA, COME TO ME!\n");
	printf("\n");
	printf("*You and Haru head off to Ginza for some good sushi*\n");
	pauseText();
	printf("Morgana: Finally, after all these years, I'm able to experience delectable \n");
	printf("Fatty Tuna coming into contact with my taste buds! Mreeeeeeowr!\n");
	printf("\n");
	printf("Haru: *giggle* I'm glad you're enjoying it, Mona-Chan.\n");
	printf("\n");
	printf("*Haru turns to you*\n");
	printf("\n");
	printf("Haru: You know Ren-kun, you're going off to college soon, and so will Ryuji-kun \n");
	printf("and Ann-chan. I'm so happy to see that Mako-chan is able to keep in touch and we \n");
	printf("have a chance to see each other thanks to our university work but...is it really \n");
	printf("sustainable?\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Haru: Then there's also me taking over our businesses. It means that immediately \n");
	printf("after I'm through with university work, I'll be extremely busy. Maybe I won't have \n");
	printf("time to meet you guys again. Ann-chan told me the possibility of her studying abroad \n");
	printf("is very real, and you are just back here in Tokyo because of remedial classes, but \n");
	printf("after that, who knows where you'll be going off to?\n");
	printf("\n");
	printf("You:   [1] If you promise to keep treating me with sushi, I'll keep coming back\n");
	printf("       [2] The phantom thieves will always be together, no matter what\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Haru: I'm sure someday, you'll have enough money to be the one treating me \n");
	printf("instead, Ren-kun. *giggle*\n");
	}
	else {
		printf("Haru: Yeah, you're right! We've faced worse challenges together and in \n");
	printf("the end, we've always ended up overcoming them. This will just be another \n");
	printf("challenge that we'll face together as a group!\n");
	}
	pauseText();
	printf("Haru: Either way, I'll work hard to make sure that we will have all the \n");
	printf("opportunities to find a way to be together as a group. My line of work might \n");
	printf("require me to travel a lot, so I guess that gives me an excuse to catch up with \n");
	printf("you guys when I can, right?\n");
	printf("\n");
	printf("*Haru looks at the uneaten sushi in front of her*\n");
	printf("\n");
	printf("Haru: For now, let's enjoy this moment. This is the restaurant's special sushi. \n");
	printf("You might be interested in giving this a try, Mona-chan!\n");
	printf("\n");
	printf("Morgana: Oh, yes please! Give me more of that lovely sushi!\n");
	printf("\n");
	printf("*You and Haru spent time enjoying sushi together before heading back home*\n");
	printf("\n");
	printf("*** HARU OKUMURA RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxTAKEMI()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Takemi: Hi! Would you have some time to spare today? My co-doctor from the \n");
	printf("university hospital I'm cooperating with wants to see me personally. \n");
	printf("They sounded excited. I'd appreciate it if you could come along with me so I \n");
	printf("could introduce you to them as well.\n");
	printf("\n");
	printf("*You and Takemi travel to Tokyo Medical University.*\n");
	pauseText();
	printf("Doctor: Dr. Takemi! It is great to see you!\n");
	printf("\n");
	printf("Takemi: Cut to the chase, Dr. Schweizer. You sounded like you had good news to \n");
	printf("bring to me.\n");
	printf("\n");
	printf("Doctor: Yes. I am happy to say that our experimental drug has received clearance \n");
	printf("after clinical trials. The patients that have been infected with drug resistant \n");
	printf("tuberculosis have exhibited marvellous improvements and their infection levels \n");
	printf("and white blood cell count have all gone down.\n");
	printf("\n");
	printf("Takemi: *gasp*...What?\n");
	printf("\n");
	printf("Doctor: It seems that the new antibiotic treatment that we have developed is \n");
	printf("effective against these drug resistant bacterial strains. You have to come and \n");
	printf("see the patients. They are all conscious and responsive!\n");
	printf("\n");
	pauseText();
	printf("Takemi: I...please. I want to see them immediately.\n");
	printf("\n");
	printf("*Takemi turns to you*\n");
	printf("\n");
	printf("Takemi: If you don't feel up to it, you may just wait here.\n");
	printf("\n");
	printf("*After a while, Takemi returned and she looked very happy*\n");
	printf("\n");
	printf("Takemi: It is true indeed. Our experimental drugs are indeed effective against \n");
	printf("the antibiotic resistant strains, and they are also fine for individuals who are \n");
	printf("immunocompromised.\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Takemi: The thought of being able to help so many lives...it's just amazing to see \n");
	printf("how far I've come.\n");
	printf("\n");
	printf("*Takemi then looks at you warmly*\n");
	printf("\n");
	printf("Takemi: You know, it's all thanks to my guinea pig. If it weren't for you and your \n");
	printf("help before with Oyamada and Miwa, who knows if I'll still be a doctor right now. \n");
	printf("\n");
	printf("You:     [1] I wouldn't have had to endure all those needles\n");
	printf("         [2] I wouldn't have medicines for my exams\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Takemi: Hey, you have to admit...it was all worth it. Think of all the lives you \n");
	printf("helped me save by having to endure all my clinical trials\n");
	}
	else {
		printf("Takemi: Not this again? Didn't you give me that excuse before? Think of something \n");
	printf("new...\n");
	}
	pauseText();
	printf("Takemi: But either way, I can't believe you have so much faith in me, the way you'd \n");
	printf("take some time to help me out with my clinical trials. I reckon this is a side \n");
	printf("effect of your time being a phantom thief, hmm? Always helping others and wanting \n");
	printf("to put others before yourself.\n");
	printf("\n");
	printf("*Takemi motions you to take a walk with her*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Takemi: Either way, you're going to college soon, right? Do you have any plans of \n");
	printf("becoming a doctor?\n");
	printf("\n");
	printf("You:    [1] The thought hasn't crossed my mind yet...\n");
	printf("	[2] Ummm...\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Takemi: Either way, I'm sure you'll do well with whatever field you decide. \n");
	printf("Just be you. If you need a recommendation letter though, I'd be more than willing \n");
	printf("to provide you with one to help with your application, hmmm?\n");
	}
	else {
		printf("Takemi: Either way, I'm sure you'll do well with whatever field you decide. \n");
	printf("Just be you. If you need a recommendation letter though, I'd be more than willing \n");
	printf("to provide you with one to help with your application, hmmm?\n");
	}
	pauseText();
	printf("*Takemi then looks at her watch*\n");
	printf("\n");
	printf("Takemi: By the way, it's still quite early. Want to get some dinner? My treat. \n");
	printf("Think of this as a thank you for all the voluntary help you've given me during\n");
	printf("my clinical trials. Allow me to just call my interns so they can come along too. \n");
	printf("You don't mind, do you?\n");
	printf("\n");
	printf("*You and Takemi enjoy a sumptuous dinner with all her interns before returning home*\n");
	printf("\n");
	printf("*** TAE TAKEMI RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxKAWAKAMI()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Kawakami: You know something, Amamiya-kun! I think you are more than ready enough \n");
	printf("for the college entrance exams! It's almost as if there is nothing left that I can \n");
	printf("teach you.\n");
	printf("\n");
	printf("Kawakami: I guess all that's left now is to write you a recommendation letter for \n");
	printf("your application form. I'm sure you'll be accepted into your first choice, given \n");
	printf("all your hard work.\n");
	printf("\n");
	printf("*Kawakami pauses a little bit and ponders in thought*\n");
	printf("\n");
	printf("Kawakami: *sigh* I can't believe you're going to college soon.\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Kawakami: It seemed like only yesterday when I saw you as a delinquent and \n");
	printf("questioning why you were assigned in my class. Little did I know that I'd witness\n");
	printf("that same delinquent becoming a crusader for justice and a fine young man right \n");
	printf("before my very eyes.\n");
	printf("\n");
	printf("You:     [1] It's all thanks to you.\n");
	printf("         [2] Is that the right way to call me 'Master'?\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Kawakami: I'm sure that I can't take all the credit. You deserve the credit \n");
	printf("more than I ever will.\n");
	}
	else {
		printf("Kawakami: Still not over that phase? I think it's about time we sort of...\n");
	printf("move on from that.\n");
	}
	pauseText();
	printf("Kawakami: But as I was saying...I guess I shouldn't judge a book by it's cover. \n");
	printf("As a matter of fact, if it weren't for you, I wouldn't be the teacher that I am \n");
	printf("right now. It's highly likely I would've quit teaching too if it weren't for you \n");
	printf("and your help.\n");
	printf("\n");
	printf("*Kawakami then smiles warmly*\n");
	printf("\n");
	printf("Kawakami: I guess that means you're leaving this place when you go to college right?\n");
	printf("That means you'll probably have an easier time availing of the special services \n");
	printf("I promised you before.\n");
	printf("\n");
	printf("*Kawakami stands up and looks at your surroundings*\n");
	printf("\n");
	printf("Kawakami: Then again, I guess you have to start practicing now. I won't be around \n");
	printf("to help you clean your room after all should you decide to do so. Hey, you'll have \n");
	printf("to learn how to clean your own room and cook your own healthy meals, you know. \n");
	printf("Don't rely too much on those instant meals...they're bad for your health.\n");
	pauseText();
	printf("Kawakami: Either way, I'm sure you'll figure that out. After all, you've done \n");
	printf("way more things than I could ever imagine myself doing.\n");
	printf("\n");
	printf("*Kawakami prepares to leave and looks at you one last time*\n");
	printf("\n");
	printf("Kawakami: Please remember to drop by the faculty office so I can give you your \n");
	printf("recommendation letter...Master. Nyan nyan...*giggle*\n");
	printf("\n");
	printf("*** SADAYO KAWAKAMI RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void maxSUMIRE()
{
	int nOption;
	fflush(stdin);
	unlockMAX();
	printf("Sumire: Senpai! I'm so glad you came today. The meet is going to be starting in a \n");
	printf("while. Would you kindly accompany me? I'd really appreciate it and I feel you'll \n");
	printf("bring me good luck. Please?\n");
	printf("\n");
	printf("*You accompanied Sumire along with the other representatives to the event*\n");
	pauseText();
	printf("Sumire: Oh my, all competitors who have performed so far have been so amazing! \n");
	printf("I know I can do better than them, but I'm so nervous right now, senpai!\n");
	printf("\n");
	printf("Announcer: And up next, we have Sumire Yoshizawa from Shujin Academy!\n");
	printf("\n");
	printf("Sumire: I'm up next, senpai! Wish me luck!\n");
	printf("\n");
	printf("*Sumire performed what appeared to be her best performance ever and you could hear \n");
	printf("amazed reactions from the crowd. Coach Hiraguchi can be seen smiling during \n");
	printf("Sumire's performance*\n");
	printf("\n");
	printf("Audience member: What an amazing performance!\n");
	printf("\n");
	printf("Audience member: She's a cinch to win this event!\n");
	printf("\n");
	printf("*After her performance, Sumire rushes over to you*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Sumire: I tried my best. I hope it was good enough, but I think I did a pretty \n");
	printf("good job.\n");
	printf("\n");
	printf("You: 	[1] You were amazing!\n");
	printf("	[2] I was too busy starting at you to notice your performance.\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Sumire: Thank you, senpai! I worked very hard day in and day out for that kind \n");
	printf("of performance!\n");
	}
	else {
		printf("Sumire: I...I don't know how to respond to that, but I think that means you \n");
	printf("thought my performance looked great. I worked very hard day in and day out for \n");
	printf("that performance!\n");
	}
	pauseText();
	printf("Coach Hiraguchi: Sumire, that was an amazing performance! That's even better than\n");
	printf("the way you performed during our training sessions!\n");
	printf("\n");
	printf("Sumire: Ma'am I...thank you, I don't know what to say!\n");
	printf("\n");
	printf("Sumire: Deep down inside, I knew I wasn't just performing for myself. I wanted to \n");
	printf("perform to make you proud, to make my sister proud, and to make my senpai over \n");
	printf("here proud of accompanying me despite his busy schedule.\n");
	printf("\n");
	printf("*Coach Hiraguchi then turns to you*\n");
	printf("\n");
	printf("Coach Hiraguchi: I guess I owe you for Sumire's wonderful performance too, don't I? \n");
	printf("*chuckle*\n");
	printf("\n");
	printf("Sumire: M-ma'am? I...I didn't mean it that way...\n");
	pauseText();
	printf("Announcer: And now, the judges have finished deliberating the results of this \n");
	printf("year's gymnastics meet. We will be announcing the winner of the event shortly.\n");
	printf("\n");
	printf("Sumire: Oh my, here it is! I hope I did well enough to make it!\n");
	printf("\n");
	printf("Audience member: I bet that girl with red hair is the winner!\n");
	printf("\n");
	printf("Announcer: And the winner of this year's meet is...Sumire Yoshizawa from \n");
	printf("Shujin High!\n");
	printf("\n");
	printf("Sumire: Oh my gosh. Senpai! Coach! I won! I won!\n");
	printf("\n");
	printf("Announcer: May we ask Ms. Yoshizawa to please come in front to receive her award?\n");
	printf("\n");
	printf("*Sumire appears in front and receives her award, much to the delight of Coach \n");
	printf("Hiraguchi and the audience members. After the awarding ceremony, Sumire approaches\n");
	printf("you*\n");
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Sumire: Senpai, I can't believe I won! This is like a dream come true for me, \n");
	printf("to win with you watching me and to make Coach Hiraguchi proud of me! \n");
	printf("I just...wish my sister was here with me today.\n");
	printf("\n");
	printf("You: 	[1] You worked hard for this, Sumire\n");
	printf("	[2] Your sister would've beaten you.\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Sumire: Thank you so much, Senpai. That means a lot to me!\n");
	}
	else {
		printf("Sumire: You think so? I think you're just saying that so I will continue \n");
	printf("working hard for my next meet.\n");
	}
	pauseText();
	nOption = 0;
	do
	{
		system("cls");
	printf("Sumire: Either way, thank you so much. You've done so much for me, ever since \n");
	printf("the events last year.\n");
	printf("\n");
	printf("*Sumire suddenly looks downtrodden*\n");
	printf("\n");
	printf("Sumire: You're going off to college, right? I guess that means I'll probably see \n");
	printf("you less often, if I will even get to see you. I guess it will be selfish of me \n");
	printf("to ask you to visit Shujin whenever you're free but...would you promise me that \n");
	printf("you'll stay in touch with me?\n");
	printf("\n");
	printf("You:   [1]  I promise\n");
	printf("       [2]  We'll always be in touch\n");
		nOption = getOption();
	} while(nOption != 1 && nOption != 2);
	printf("\n");
	if (nOption == 1) {
		printf("Sumire: I'm so glad to hear that, senpai!\n");
	}
	else {
		printf("Sumire: I'm so glad to hear that, senpai!\n");
	}
	pauseText();
	printf("*Coach Hiraguchi approaches*\n");
	printf("\n");
	printf("Coach Hiraguchi: Sumire, that was amazing! I'm sure your sister would be so proud of \n");
	printf("you.\n");
	printf("\n");
	printf("Sumire: Thank you ma'am! I...I do wish she was watching, wherever she is, \n");
	printf("I dedicate this to her.\n");
	printf("\n");
	printf("Coach Hiraguchi: I'm sure she was watching you and that she's proud of what you \n");
	printf("have become. You have a bright future ahead of you, Sumire. I hope you continue \n");
	printf("doing what you're doing...your potential towards international glory is all but \n");
	printf("given seeing what you've become so far.\n");
	printf("\n");
	printf("Sumire: Ma'am, you have no idea how much those words mean so much to me. \n");
	printf("I promise, I'll continue working hard so that you'll be proud and for my \n");
	printf("sister's honor.\n");
	printf("\n");
	printf("Coach Hiraguchi: That is amazing to hear, Sumire. I look forward to that.\n");
	printf("\n");
	printf("*Coach Hiraguchi turns to you*\n");
	pauseText();
	printf("Coach Hiraguchi: I see that Sumire owes you a lot too. I hope you can stick \n");
	printf("around so that you can also witness the bright future she has ahead of her.\n");
	printf("\n");
	printf("Sumire: C-coach! I...ummm...uh...\n");
	printf("\n");
	printf("Coach Hiraguchi: Hahahaha! Come now. I was just getting lost in the mood. \n");
	printf("Hey, why don't we have a celebratory dinner with everyone in recognition \n");
	printf("of your accomplishment, Sumire? And if your boyfriend is not too busy, \n");
	printf("he could come along too.\n");
	printf("\n");
	printf("Sumire: H-he is not my b-boyfriend! He's j-just my senpai, ma'am!\n");
	printf("\n");
	printf("Coach Hiraguchi: Here, come along too! I'm sure you're starving anyway.\n");
	printf("\n");
	printf("*You join Shujin High's gymnastics team for a celebratory dinner. \n");
	printf("However, it turned out to be a very awkward one, with Sumire acting flustered \n");
	printf("all night and you not being too familiar with all the other members*\n");
	printf("\n");
	printf("*** SUMIRE YOSHIZAWA RELATIONSHIP MAX. LEVEL! ***\n");
	pauseText();
}

void invalidEvent()
{
	fflush(stdin);
	system("cls");
	printf ("Invalid event call...\n");
	getch();
}

void triggerEvent(int characterNo,int type)
{
	switch (characterNo)
	{
		case 1: // Sojiro Sakura
		if (type == 1)
			unlockSOJIRO();
		else if (type == 2)
			maxSOJIRO();
		else
			invalidEvent();
		break;
		
		case 2: // Ryuji Sakamoto
		if (type == 1)
			unlockRYUJI();
		else if (type == 2)
			maxRYUJI();
		else
			invalidEvent();
		break;
		
		case 3: // Ann Takamaki
		if (type == 1)
			unlockANN();
		else if (type == 2)
			maxANN();
		else
			invalidEvent();
		break;
		
		case 4: // Yusuke Kitagawa
		if (type == 1)
			unlockYUSUKE();
		else if (type == 2)
			maxYUSUKE();
		else
			invalidEvent();
		break;
		
		case 5: // Makoto Niijima
		if (type == 1)
			unlockMAKOTO();
		else if (type == 2)
			maxMAKOTO();
		else
			invalidEvent();
		break;
		
		case 6: // Futaba Sakura
		if (type == 1)
			unlockFUTABA();
		else if (type == 2)
			maxFUTABA();
		else
			invalidEvent();
		break;
		
		case 7: // Haru Okumura
		if (type == 1)
			unlockHARU();
		else if (type == 2)
			maxHARU();
		else
			invalidEvent();
		break;
		
		case 8: // Tae Takemi
		if (type == 1)
			unlockTAKEMI();
		else if (type == 2)
			maxTAKEMI();
		else
			invalidEvent();
		break;
		
		case 9: // Sadayo Kawakami
		if (type == 1)
			unlockKAWAKAMI();
		else if (type == 2)
			maxKAWAKAMI();
		else
			invalidEvent();
		break;
		
		case 10: // Sumire Yoshizawa
		if (type == 1)
			unlockSUMIRE();
		else if (type == 2)
			maxSUMIRE();
		else
			invalidEvent();
		break;
		
		default:
			invalidEvent();
			break;
	}
}
