# include <Siv3D.hpp>
using namespace std;
void Main()
{
    //ウィンドウの大きさ設定//
    Window::Resize(1080,920);
    
    //背景色//
    Graphics::SetBackground(Color(Palette::White));
    //変数の宣言//
    int x=20 , y=20;//横と縦
    //枠
    const LineString line
    {
        Vec2(99, 49), Vec2(100+ x *33, 49),
        Vec2(100+ x *33, 50+ y *33), Vec2(99, 50+ y *33),Vec2(99, 49)
    };
    int Ex=(100+x*33)-99;
    int Gx=(50+y*33)-49;
    
    int botan[y][x];
    
    
    while (System::Update())
    {
        //ClearPrint
        ClearPrint();
        //フィールドの背景
        Rect(99, 49, Ex,Gx).draw(Palette::Black);
        //フィールドを作成
        int a=100,b=50;//初期位置
        for(int j=0;j<y;j++){
                for(int i=0;i<x;i++){
                        Rect(a, b, 30, 30).draw(Palette::White);
                        a=a+33;
                    Print<<botan[y][x];
            
            a=100;
            b=b+33;
        }
        line.draw(5, Palette::Black);
    }
  }
}
