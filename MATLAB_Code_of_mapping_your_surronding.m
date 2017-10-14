Matlab Code :
% Real time plotting.
clear all
close all
clc
arduino=serial('COM3','BaudRate',9600);
fopen(arduino); % initiate arduino communication
CM(1)=0;
pos(1)=0;
i=1;
while (pos(1) < 180)
 pos(2) = fscanf(arduino,'%f');
 CM(2)=fscanf(arduino,'%f');
 pos(1)= pos(2);
 CM(1)=CM(2);
 table(i,1) = pos(1);
 table(i,2) = CM(1);
 i=i+1;
end
polar(table(:,1)*pi/180, table (:,2));
title('Map of the Environment');
grid on;
fclose(arduino); % end communication with arduino
