# Generated by Django 5.0.6 on 2024-06-30 18:20

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('Books', '0007_alter_borrow_options'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='bookmodel',
            name='description',
        ),
        migrations.RemoveField(
            model_name='bookmodel',
            name='category',
        ),
        migrations.AlterField(
            model_name='bookmodel',
            name='image',
            field=models.ImageField(upload_to='book_images/'),
        ),
        migrations.AlterField(
            model_name='bookmodel',
            name='price',
            field=models.DecimalField(decimal_places=2, max_digits=10),
        ),
        migrations.AlterField(
            model_name='bookmodel',
            name='title',
            field=models.CharField(max_length=255),
        ),
        migrations.AddField(
            model_name='bookmodel',
            name='category',
            field=models.ForeignKey(default=1, on_delete=django.db.models.deletion.CASCADE, to='Books.category'),
            preserve_default=False,
        ),
    ]