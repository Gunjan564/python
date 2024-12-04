import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
titanic = pd.read_csv('C:/Users/hp/Desktop/CODE/python/titanic.csv')
titanic['Pclass'] = pd.to_numeric(titanic['Pclass'], errors='coerce')
titanic['Survived'] = pd.to_numeric(titanic['Survived'], errors='coerce')
ax = titanic.dropna(subset=['Survived','Pclass'])
(titanic.groupby('Sex')['Survived'].mean() * 100).plot(kind='bar')
plt.show()