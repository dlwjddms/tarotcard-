#pragma warning(disable:4996)
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>


int Choosecard();
int Choosecard_2();
void intepretCard(int*key, int*a);
int main()
{
	int b = 0;
	int q = 0;

	printf("타로를 시작합니다. 보이는 것들중 카드 한장을 선택해 주세요. \n");
	printf("ㅁ ㅁ ㅁ ㅁ ㅁ\n");
	b = Choosecard();
	printf("ㅁ ㅁ ㅁ ㅁ ㅁ\n");
	q = Choosecard_2();
	printf("ㅁ ㅁ ㅁ ㅁ ㅁ\n");
	
	intepretCard(&b,& q);
	printf("\nㅁ ㅁ ㅁ ㅁ ㅁ\n");
	system("pause");
	return 0;
}


int Choosecard_2() {
	srand(time(NULL));
	int random = (rand() % 2);
	return random;

}

int Choosecard() {
	srand(time(NULL));
	int random = (rand() % 17);
	return random;

}


void intepretCard(int*key, int*a) {
	switch (*key)
	{
	case 0:printf("00.THE FOOL \n 자유롭고 어디에나 자신감이 넘치고 무거운 짐에도(남자가 들고 있는 가방)스트레스를 받지 않고 능실능실하게 넘어가려고 합니다 \n 아주 좋은 성격이지만 주의력도 없고 책임감이 강하지 않은게 문제입니다 \n 책임감은 없지만 강아지가 그를 믿고 따르네요 이러하듯이 바보 카드의 주위에는 항상 힘이 되어주는 무언가가 있습니다 \n		키워드 \n자유로움, 긍정적인, 늘 신나는, 책임감 없는, 주의력 부족, 상대방을 잘믿음");
		if (a == 1) { printf("정방향 \n 자유로움, 구속받지않음, 스트레스없음, 긍정적, 생각없음"); }
		else { printf("역방향 \n 한 곳에만 집중을 못함, 끈기 없음, 이기주의, 책임감 없음"); } break;
	case 1:printf("01.THE MAGICIAN \n 마법사 카드는 상당히 자유로워 보이는 카드입니다 \n 광대 카드도 자유롭다라고 할 수가 있지만 굳이 따진다면 자유로움의 상징은 광대가 더 큰 쪽이지요 \n	이 마법사는 본인이 잘하는 일에 대한 자신감(높이 들고 있는 손)	스스로에 대한 자존감도 높은 카드예요\n어딜가나 시선을 집중하죠 그리고 그 또한 그러한 시선을 즐깁니다 (본인이 인기가 많은 것을 알고 있습니다) \n너~무 스스로가 잘난것을 알아서 오만하기도 하고 자만심도 굉장합니다 \n꾀도 많고 끼도 많은 그는 이성의 마음을 쉽게 얻을 수가 있습니다 \n그렇지만 사람들의 주목 받기 좋아하기 때문에 한 곳에 정착을 하기는 힘든 타입이죠 \n	키워드  \n 끼가 많음, 시작을 알림, 출발, 자존심, 자존감, 재주, 다재다능, 주목, 독자적, 관심받기좋아함");
		if (*a == 1) { printf(" \n정방향 :\n멀티플레이를 잘한다, 하나를 알려주면 열을 앎, 리더쉽이 강함, 이성을 좋아함 \n이성에게 끼를잘부림, 누구에게나 연락을 잘 함, 늘 본인이 주도해야함	\n	좋은 결과, 승진, 건강상태의회복"); }
		else { printf("\n역방향 \n기운이 없다, 흥미를 잃음, 쉽게 빠진만큼 쉽게 헤어나옴, 양다리\n 감정이 없음, 싫어함, 꾀를 부리지만 티가남, 좋은기회를놓침, 거짓말"); } break;
	case 2:printf("02.THE HIGH PRIESTESS \n 흑과 백이 겉과 속이 다르다라는 의미를 하기도 합니다 \n따라서 나를 좋아하면서도 속으론 싫어할 수도 있고	\n믿지 않는 척 하면서 속으론 믿을 수도 있습니다 \n그래서 어딘가 모르게 속을 알 수가 없다라는 느낌을 받아요 \n 쓸데 없는 싸움을 싫어하고 성격도 아주 착하고 조용한 카드입니다 \n 키워드 \n 지성, 이성적인판단, 겉과속이다름, 짝사랑, 지혜, 공부, 이성적인선택");
		if (*a == 1) { printf("\n정방향 \n협의를 잘해준다, 말을 잘 들어줌, 이해를 하려고 노력함, 차분하게 상황을 해결 \n 어느쪽이든 손해를 안보게 조율을 잘함, 마음이 따뜻함, 잘 베푼다			"); }
		else { printf("\n역방향 \n 이기적임, 이야기를 들으려고 안함, 실수를한다, 감정적인 선택, 기분파 \n	성격이 예민함, 과격해짐, 평소와 다르게 행동함, 실수를 많이함	"); }break;
	case 3:printf("03.여황제");
		if (*a == 1) {}
		else {}break;
	case 4:printf("04.THE EMPEROR \n 어딘가를 쳐다보는 시선이 의심의 눈초리 같기도 하네요\n	어딘가 모르게 의처증도 있고 결벽증도 있습니다\n자존심은 하늘을 찌르죠\n	본인이 하고 싶은대로 하는 성향의 카드라 상대방을 지배하려고 합니다	\n	본인 마음대로 하는 성향이 크구요	\n	이 카드가 나온 분들은 직위가 보통 높으세요\n	그렇지 않으면 직장내 분위기가 되게 무뚝뚝하거나 남자가 많습니다..\n   키워드\n	이기적이다, 보수적, 가부장적, 의처(부)증, 자존심이쎔, 이성적, 부유함, 사회적위치");
		if (*a == 1) { printf("\n정방향 \n권위적이다, 사회적인 위치가 높다, 자존심이 높다, 본인의 상처를 안드러냄			\n 동정 받기를 싫어함, 안정적인 삶, 가장, 무뚝뚝함, 의처(부)증, 겉으로 강함, 절대 개방적이지 않음	"); }
		else { printf("\n역방향\n	자존심만 쎔, 폭력적, 거친말투, 고집이 강함, 허세, 죄의식없음			"); }break;
	case 5:printf("05.THE HIEROPHANT \n 사람은 아주 좋은 교황카드 그렇지만 너~무 원칙,규칙을 중요하게 생각해서 답답하기도 합니다 	\n	그래서 융통성이 없어요 그치만 중요한 건 사람은 아주 좋다는거	\n	앞에 두명의 사람이 있죠 ? 그 분들에게 뭐라고 이야기를 하시는 것 같네요 \n	틀림없이 틀린말은 아닐거고 좋은 이야기를 하시는 것 같네요 \n 교황카드는 잔소리가 아주 심한 타입입니다		\n기본의미		\n 융통성 없음, 잔소리가 심함, 바른생각, 바른생활, 보수적, 철두철미함, 틀림없음	");
		if (a == 1) {  }
		else {}break;
	case 6:printf("06.연인");
		if (a == 1) {}
		else {}break;
	case 7:printf("07.전차");
		if (a == 1) {}
		else {}break;
	case 8:printf("08 힘");
		if (a == 1) {}
		else {}break;
	case 9:printf("09 은둔자");
		if (a == 1) {}
		else {}break;
	case 10:printf("10 운명의 수레바퀴");
		if (a == 1) {}
		else {}break;
	case 11:printf("11 정의");
		if (a == 1) {}
		else {}break;
	case 12:printf("12 매달린 남자");
		if (a == 1) {}
		else {}break;
	case 13:printf("13 DEATH");
		if (a == 1) {}
		else {}break;
	case 14:printf("14 TEMPERANCE");
		if (a == 1) {}
		else {}break;
	case 15:printf("15 THE DEVIL");
		if (a == 1) {}
		else {}break;
	case 16:printf("THE TOWER");
		if (a == 1) {}
		else {}break;

	default:
		break;
	}
}

