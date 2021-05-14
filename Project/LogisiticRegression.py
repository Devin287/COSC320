'''
Devin Schmidt
COSC 320
Logistic Regression using social netowrking ad data
'''

'''
Need to import the pandas library to use csv file
Also imported a library to plot the data in the csv
'''
import pandas as pd
from matplotlib import pyplot as plt

#Created the dataframe 
dataframe = pd.read_csv("/home/dev/COSC320/Project/Social_Network_Ads.csv")
print(dataframe.head())

#Imported sci kit learn library to use the api it has for machine learning algorithms
from sklearn.model_selection import train_test_split
#Setting x to the independent variables I want to train and test 
#Setting y to the dependent variable that I want to train and test
x = dataframe.drop(['User ID', 'Gender', 'Purchased'], axis=1)
y = dataframe.Purchased

#Pre-processing data so that it can be predicted accurately 
from sklearn.preprocessing import StandardScaler
'''
These funtions are for pre-preocessing the data 
this allow the data to not vary from one another
'''
scaler = StandardScaler()
scaler.fit(x)
scaledData = scaler.transform(x)
scaledData = pd.DataFrame(scaledData, columns= x.columns)

#Splitting the data so that I can train the data and test it with the same csv
trainX, testX, trainY, testY = train_test_split(scaledData,y, test_size = 0.2,random_state=0) 

#Imported the Logistic regression function from sklearn api
from sklearn.linear_model import LogisticRegression
#Setting logmodel to the function call then using logmodel to put in the training data
logmodel = LogisticRegression()
logmodel.fit(trainX,trainY)

#Predicting the values in the test data
predictY = logmodel.predict(testX)
print(testX)
print(predictY)

#Imported this to see how well it worked
from sklearn.metrics import classification_report
print(classification_report(testY, predictY))

#The data is being plotted using the matplotlib ans seaborn api
#Displaying graphs
plt.scatter(dataframe.EstimatedSalary,dataframe.Purchased)
plt.xlabel('Estimated Salary')
plt.ylabel('Purchased')
plt.show()
plt.scatter(dataframe.Age,dataframe.Purchased)
plt.xlabel('Age')
plt.ylabel('Purchased')
plt.show()


import seaborn as sns
sns.relplot(x=dataframe.EstimatedSalary, y=dataframe.Age, hue=dataframe.Purchased)
plt.title('Estimated Salary vs Age')
plt.xlabel('Estimated Salary')
plt.ylabel('Age')
plt.show()