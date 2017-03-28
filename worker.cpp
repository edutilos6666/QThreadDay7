#include "worker.h"


Worker::Worker(int max):
    max(max)
{

}



void Worker::sort() {
    QVector<int> vector ;
//    qDebug() << vector;
//    qDebug() << "";

    vector.reserve(max);
    for(int i=0; i< max ; ++i) {
        vector << (max-i+1);
    }

int i , j ;
for(j=0; j < max- 1; ++j) {
  int iMin = j;
  for(i = j+1; i < max ; i++) {
      if(vector.at(i) < vector.at(iMin)) {
          iMin = i ;
      }
  }

  if(iMin != j) {
      int temp = vector.at(iMin);
      vector.replace(iMin , vector.at(j));
      vector.replace(j , temp);

  }

  if(!stopFlag) {
      //if(j == max -3) break;
      emit valueChanged(j+2);
     //qDebug() << "j = " << j;
  }
 // else if(j == max -2) break;
  else {
      //qDebug() << "j = " << j ;
      j--;
  }

}

//qDebug() << "end of loop";
}



void Worker::stop()
{
  stopFlag = true;
}

void Worker::start()
{
  stopFlag = false ;
   // QThread::currentThread()->start();

}
