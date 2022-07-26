{\rtf1\ansi\ansicpg949\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red253\green143\blue63;\red31\green31\blue36;\red252\green106\blue93;
\red255\green255\blue255;\red252\green95\blue163;\red65\green161\blue192;\red161\green103\blue230;\red208\green191\blue105;
}
{\*\expandedcolortbl;;\csgenericrgb\c99131\c56076\c24611;\csgenericrgb\c12054\c12284\c14131;\csgenericrgb\c98912\c41558\c36568;
\csgenericrgb\c100000\c100000\c100000\c85000;\csgenericrgb\c98839\c37355\c63833;\csgenericrgb\c25490\c63137\c75294;\csgenericrgb\c63137\c40392\c90196;\csgenericrgb\c81498\c74939\c41233;
}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab593
\pard\tx593\pardeftab593\pardirnatural\partightenfactor0

\f0\fs24 \cf2 \cb3 #include \cf4 <stdio.h>\cf5 \
\

\f1\b \cf6 int
\f0\b0 \cf5  \cf7 main\cf5 ()\{\
    \
    
\f1\b \cf6 int
\f0\b0 \cf5  a, b, n, m;\
    \cf8 scanf\cf5 (\cf4 "%d %d"\cf5 , &n, &m);\
    
\f1\b \cf6 if
\f0\b0 \cf5  ((n-m)<\cf9 0\cf5 ||(n-m)%\cf9 2\cf5 ==\cf9 1\cf5 )\{\
        \cf8 printf\cf5 (\cf4 "-1"\cf5 );\
    \}\
    
\f1\b \cf6 else
\f0\b0 \cf5  \{\
        a = (n+m)/\cf9 2\cf5 ;\
        b = (n-m)/\cf9 2\cf5 ;\
        \cf8 printf\cf5 (\cf4 "%d %d"\cf5 , a, b);\
    \}\
    
\f1\b \cf6 return
\f0\b0 \cf5  \cf9 0\cf5 ;\
\}\
}