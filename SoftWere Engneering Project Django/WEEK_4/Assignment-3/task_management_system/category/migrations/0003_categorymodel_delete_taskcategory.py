# Generated by Django 5.0.6 on 2024-06-08 13:31

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('category', '0002_rename_categoryname_taskcategory_name_and_more'),
    ]

    operations = [
        migrations.CreateModel(
            name='CategoryModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=50)),
            ],
        ),
        migrations.DeleteModel(
            name='TaskCategory',
        ),
    ]