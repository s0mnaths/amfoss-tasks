import 'package:flutter/material.dart';
import 'package:dots_indicator/dots_indicator.dart';

void main() => runApp(MaterialApp(home: HomePage(),));

class HomePage extends StatefulWidget {
  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {

  PageController pageController = PageController(initialPage: 0);
  int pageChanged=0;

  @override
  Widget build(BuildContext context) {
    return Scaffold(

        body: Column(
          children: [
            Container(
              color: Colors.white,
              width: 410,
              height: 130,
              alignment: Alignment.bottomCenter,
              child: PageView(
                controller: pageController,
                onPageChanged: (index){
                  setState(() {
                    pageChanged=index;
                  });
                },
                children: [
                  new DotsIndicator(
                    mainAxisAlignment: MainAxisAlignment.center,
                    dotsCount: 2,
                    position: pageChanged.toDouble(),
                    decorator: DotsDecorator(
                      color: Colors.deepPurple[200],
                      activeColor: Colors.deepPurpleAccent[700],
                      size: const Size.square(9.0),
                      activeSize: const Size(100.0, 9.0),
                      activeShape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(5.0)),
                    ),
                  )
                ],
              ),
            ),
            Expanded(
              child: PageView(
                controller: pageController,
                onPageChanged: (index){
                  setState(() {
                    pageChanged=index;
                  });
                },

                children: [
                  //**********CONTENT FOR PAGE VIEW 1***********
                  Container(
                    width: 400,
                    height: 700,
                    color: Colors.white,
                    child: Stack(
                      alignment: Alignment.bottomCenter,
                      overflow: Overflow.visible,
                      children: <Widget>[
                        Positioned(
                          left: 0,
                          bottom: 1,
                          child: Container(
                            padding: EdgeInsets.all(20),
                            color: Colors.white,
                            width: 250,
                            height: 70,
                            child: Text('Swipe left to get started',
                              style: TextStyle(
                                fontFamily: 'Poppins-Bold',
                                fontWeight: FontWeight.bold,
                                fontSize: 15,
                                color: Colors.deepPurple[400],
                              ),
                            ),
                          ),
                        ),
                        Positioned(
                          left: 20,
                          bottom: 185,
                          child: Container(
                            child: Text('Hello!',
                              style: TextStyle(
                                fontFamily: 'Poppins-Bold',
                                fontWeight: FontWeight.bold,
                                fontSize: 22,
                                color: Colors.deepPurple[400],
                              ),
                            ),
                            color: Colors.white,
                            width: 80,
                            height: 40,
                          ),
                        ),
                        Positioned(
                          left: 20,
                          bottom: 45,
                          child: Container(
                            child: Text('Your own private Cloud is one step away.',
                              style: TextStyle(
                                fontFamily: 'Poppins-ExtraBold',
                                fontWeight: FontWeight.bold,
                                fontSize: 35,
                                color: Colors.indigo[900],
                              ),
                            ),
                            color: Colors.white.withOpacity(0.0),
                            width: 250,
                            height: 150,
                          ),
                        ),
                        Positioned(
                          right: 0,
                          bottom: 170,
                          child: Container(
                            alignment: Alignment.bottomRight,
                            color: Colors.white.withOpacity(0.0),
                            child: Image.asset('assets/art-work.png',
                              scale: 0.9,
                            ),
                            width: 230,
                            height: 350,
                          ),
                        ),
                        Positioned(
                          left: 0,
                          top: 0,
                          child: Container(
                            padding: EdgeInsets.zero,
                            alignment: Alignment.bottomLeft,
                            color: Colors.white.withOpacity(0.0),
                            child: Image.asset('assets/art-cloud.png',
                              scale: 0.8,
                            ),
                            width: 290,
                            height: 390,
                          ),
                        ),
                      ],
                    ),
                  ),


                  //************CONTENT FOR PAGE VIEW 2**********
                  Container(
                    padding: EdgeInsets.only(left: 20, right: 20, bottom: 20),
                    color: Colors.white,
                    height: 150,
                    child: new Column(
                      mainAxisAlignment: MainAxisAlignment.end,
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: <Widget>[
                        Container(
                          child: Image.asset('assets/art-stairs.png',
                            scale: 0.7,
                          ),
                          padding: EdgeInsets.only(top: 0.0,bottom: 60),
                          height: 432,
                          width:400,
                          color: Colors.white,
                        ),
                        Container(
                          padding: EdgeInsets.fromLTRB(0, 15, 5, 5),
                          child: Text('Your Premium Cloud',
                            style: TextStyle(
                              fontFamily: 'Poppins-ExtraBold',
                              fontWeight: FontWeight.bold,
                              fontSize: 21,
                              color: Colors.deepPurple[400],
                            ),
                          ),
                          color: Colors.white,
                          height: 50,
                          width: 400,
                        ),
                        Container(
                          child: Text('Launch your next campaign within minutes with '
                              'Cloud Campaign Monitor',
                            style: TextStyle(
                                fontFamily: 'Poppins-ExtraBold',
                                fontWeight: FontWeight.bold,
                                fontSize: 27.0,
                                color: Colors.indigo[900]
                            ),
                          ),
                          color: Colors.white,
                          width: 315,
                          height: 123,
                        ),
                      ],
                    ),
                  ),

                ],
              ),
            ),
            Container(
              color: Colors.white,
              padding: EdgeInsets.fromLTRB(20, 5, 20, 10),
              child: new Center(
                child: Align(
                  alignment: Alignment.bottomCenter,
                  child: ButtonTheme(
                    child: FlatButton(
                      minWidth: 380.0,
                      height: 50.0,
                      shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(10)),
                      onPressed: () {},
                      child: Text(
                        'Create an account',
                        style: TextStyle(
                          fontSize: 20.0,
                          fontWeight: FontWeight.bold,
                          color: Colors.white,
                          fontFamily: 'Poppins-Bold',
                        ),
                      ),

                      color: Colors.deepPurpleAccent[700],
                    ),
                  ),
                ),
              ),
            ),

          ],
        )
    );
  }
}
